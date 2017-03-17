clear all
close all
clc

Video = VideoReader('TestFlight1.mp4');     % Load test flight video
G_THd = 0.04;                              % Set threshold for colour green
B_THd = 0.1;                               % Set threshold for colour blue

while hasFrame(Video)                                   % Run as long as a next frame is available
    Frame_RGB  = readFrame(Video);                    % Break video into separate frames
    
    Frame_Green = imsubtract(Frame_RGB(:,:,2), ...    % Get green component of the image
        rgb2gray(Frame_RGB));                         % 
    Frame_Green = medfilt2(Frame_Green, [3 3]);       % Filter out the noise by using median filter
    Frame_BinG  = im2bw(Frame_Green, G_THd);          % Convert the image into binary image with the green objects as white
    
    Frame_Blue  = imsubtract(Frame_RGB(:,:,3), ...    % Get blue component of the image
        rgb2gray(Frame_RGB));                         % 
    Frame_Blue  = medfilt2(Frame_Blue, [3 3]);        % Filter out the noise by using median filter
    Frame_BinB  = im2bw(Frame_Blue, B_THd);           % Convert the image into binary image with the blue objects as white
    
    Frame_Bin = Frame_BinG - Frame_BinB;
    
    subplot(2,2,1);
    imshow(Frame_RGB);
    title('RGB video')
    subplot(2,2,2);
    imshow(Frame_BinG);
    title('Binary video (Intermediate, GREEN)')
    subplot(2,2,4);
    imshow(Frame_BinB);
    title('Binary video (Intermediate, BLUE)')
    subplot(2,2,3);
    imshow(Frame_Bin);
    title('Binary video')
    drawnow;
end