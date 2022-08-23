#define PIN_MOTOR_LEFT_DIR 1
#define PIN_MOTOR_LEFT_PWM 2

class Motor
{
private:
    int _pin_dir, _pin_pwm;

public:
    Motor(int pin_dir, int pin_pwm)
    {
        _pin_dir = pin_dir;
        _pin_pwm = pin_pwm;

        pinMode(_p_r, OUTPUT);
        pinMode(_p_l, OUTPUT);
    }
    void avanzar(int velocidad)
    {
        digitalWrite(_pin_dir, LOW);
        analogWrite(_pin_pwm, velocidad);
    }
    void retroceder( int velocidad)
    {
        digitalWrite(_pin_dir, LOW);
        analogWrite(_pin_pwm, velocidad);
    }
    void frenar()
    {
        digitalWrite(_pin_dir, LOW);
        digitalWrite(_pin_pwm, LOW);
    }
};

Motor *motor = new Motor(PIN_MOTOR_LEFT_DIR,PIN_MOTOR_LEFT_PWM);


void setup(){

}
void loop(){

}