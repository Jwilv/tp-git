#define pin_r 1
#define pin_l 2

class Motor
{
private:
    int _p_r, _p_l;

public:
    Motor(int pin_r, int pin_l)
    {
        _p_r = pin_r;
        _p_l = pin_l;

        pinMode(_p_r, OUTPUT);
        pinMode(_p_l, OUTPUT);
    }
    void avanzar(int velocidad)
    {
        digitalWrite(_p_r, LOW);
        analogWrite(_p_l, velocidad);
    }
    void retroceder( int velocidad)
    {
        digitalWrite(_p_l, LOW);
        analogWrite(_p_r, velocidad);
    }
    void frenar()
    {
        digitalWrite(_p_r, LOW);
        digitalWrite(_p_l, LOW);
    }
};

Motor *motor = new Motor(pin_r,pin_l);


void setup(){

}
void loop(){

}