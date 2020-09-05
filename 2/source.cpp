#include <opencv2/opencv.hpp>

int main()
{
    // 指定された画像を読み込む. 
    cv::Mat imageInput = cv::imread("sample.jpg", -1);

    if (imageInput.empty())
    {
        return -1;
    }

    // 入力画像と出力画像を表示するウィンドウを作成する. 
    cv::namedWindow("Example_in", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("Example_out", cv::WINDOW_AUTOSIZE);

    // 入力画像をウィンドウに表示する. 
    cv::imshow("Example_in", imageInput);

    // 平滑化した出力画像を保持する画像変数を作成する. 
    cv::Mat imageOutput;

    // 平滑化処理をする. 
    cv::GaussianBlur(imageInput, imageOutput, cv::Size(5, 5), 3, 3);
    cv::GaussianBlur(imageOutput, imageOutput, cv::Size(5, 5), 3, 3);

    // 平滑化処理した画像をウィンドウに表示する. 
    cv::imshow("Example_out", imageOutput);

    // キー入力待ち. 
    cv::waitKey(0);

    return 0;
}
