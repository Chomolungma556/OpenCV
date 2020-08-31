#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat image = cv::imread("sample.png", -1);

    if (image.empty())
    {
        return -1;
    }

    cv::namedWindow("Example 2-1", cv::WINDOW_AUTOSIZE);
    cv::imshow("Example 2-1", image);

    cv::waitKey(0);
    cv::destroyWindow("Example 2-1");

    return 0;
}
