#ifndef SPECIALMAN3
#define SPECIALMAN3
#include "Man.h"

class Specialman3 : public Man
{
public:
	Specialman3() = default;
	~Specialman3() {}
	void Load_state() override;
private:
	void heart(int maingirl_state, int maingirl_left, bool evolution, int bump_delay, Score* score_sys) override;
	void modify_hp(Score* score_sys) override;
};

#endif // !SPECIAL_H