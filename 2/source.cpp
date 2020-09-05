#include <opencv2/opencv.hpp>

int main()
{
    // �w�肳�ꂽ�摜��ǂݍ���. 
    cv::Mat imageInput = cv::imread("sample.jpg", -1);

    if (imageInput.empty())
    {
        return -1;
    }

    // ���͉摜�Əo�͉摜��\������E�B���h�E���쐬����. 
    cv::namedWindow("Example_in", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("Example_out", cv::WINDOW_AUTOSIZE);

    // ���͉摜���E�B���h�E�ɕ\������. 
    cv::imshow("Example_in", imageInput);

    // �����������o�͉摜��ێ�����摜�ϐ����쐬����. 
    cv::Mat imageOutput;

    // ����������������. 
    cv::GaussianBlur(imageInput, imageOutput, cv::Size(5, 5), 3, 3);
    cv::GaussianBlur(imageOutput, imageOutput, cv::Size(5, 5), 3, 3);

    // ���������������摜���E�B���h�E�ɕ\������. 
    cv::imshow("Example_out", imageOutput);

    // �L�[���͑҂�. 
    cv::waitKey(0);

    return 0;
}
