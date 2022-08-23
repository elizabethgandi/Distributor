#ifndef CAN_H
#define CAN_H

class Can{

    public:

    Can(float v);
    ~Can();   
    float getVol() const;

    private:

    float volume;
};
#endif