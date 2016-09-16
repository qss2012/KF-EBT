#ifndef BTRACKER_H
#define BTRACKER_H

/* Base tracker structure for KFEBT
 *
 */

#include <opencv2/opencv.hpp>
#include <QThread>
#include <vector>



class BTracker : public QThread
{
    Q_OBJECT

public:
    bool ok;
    bool update;
    std::vector<float> state;
    std::vector<float> stateUncertainty;

    virtual void init(cv::Mat image, cv::Rect region) = 0;
    virtual void correctState(std::vector<float> st) = 0;
    virtual void track(cv::Mat image) = 0;

private:


};

#endif // BTRACKER_H