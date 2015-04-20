
#include <AP_Common.h>
#include <AP_Param.h>

/// @class	TEST_AI
/// @brief	Object managing one RC channel
class TEST_AI {
public:
    int16_t         one_hz_count=0;
    int16_t         ten_hz_count=0;
    void            update_one_hz_count();
    void            update_ten_hz_count();

private:

protected:

};