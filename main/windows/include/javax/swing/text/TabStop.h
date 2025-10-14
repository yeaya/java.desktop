#ifndef _javax_swing_text_TabStop_h_
#define _javax_swing_text_TabStop_h_
//$ class javax.swing.text.TabStop
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

#pragma push_macro("ALIGN_BAR")
#undef ALIGN_BAR
#pragma push_macro("ALIGN_CENTER")
#undef ALIGN_CENTER
#pragma push_macro("ALIGN_DECIMAL")
#undef ALIGN_DECIMAL
#pragma push_macro("ALIGN_LEFT")
#undef ALIGN_LEFT
#pragma push_macro("ALIGN_RIGHT")
#undef ALIGN_RIGHT
#pragma push_macro("LEAD_DOTS")
#undef LEAD_DOTS
#pragma push_macro("LEAD_EQUALS")
#undef LEAD_EQUALS
#pragma push_macro("LEAD_HYPHENS")
#undef LEAD_HYPHENS
#pragma push_macro("LEAD_NONE")
#undef LEAD_NONE
#pragma push_macro("LEAD_THICKLINE")
#undef LEAD_THICKLINE
#pragma push_macro("LEAD_UNDERLINE")
#undef LEAD_UNDERLINE

namespace javax {
	namespace swing {
		namespace text {

class $import TabStop : public ::java::io::Serializable {
	$class(TabStop, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	TabStop();
	void init$(float pos);
	void init$(float pos, int32_t align, int32_t leader);
	virtual bool equals(Object$* other) override;
	virtual int32_t getAlignment();
	virtual int32_t getLeader();
	virtual float getPosition();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int32_t ALIGN_LEFT = 0;
	static const int32_t ALIGN_RIGHT = 1;
	static const int32_t ALIGN_CENTER = 2;
	static const int32_t ALIGN_DECIMAL = 4;
	static const int32_t ALIGN_BAR = 5;
	static const int32_t LEAD_NONE = 0;
	static const int32_t LEAD_DOTS = 1;
	static const int32_t LEAD_HYPHENS = 2;
	static const int32_t LEAD_UNDERLINE = 3;
	static const int32_t LEAD_THICKLINE = 4;
	static const int32_t LEAD_EQUALS = 5;
	int32_t alignment = 0;
	float position = 0.0;
	int32_t leader = 0;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("ALIGN_BAR")
#pragma pop_macro("ALIGN_CENTER")
#pragma pop_macro("ALIGN_DECIMAL")
#pragma pop_macro("ALIGN_LEFT")
#pragma pop_macro("ALIGN_RIGHT")
#pragma pop_macro("LEAD_DOTS")
#pragma pop_macro("LEAD_EQUALS")
#pragma pop_macro("LEAD_HYPHENS")
#pragma pop_macro("LEAD_NONE")
#pragma pop_macro("LEAD_THICKLINE")
#pragma pop_macro("LEAD_UNDERLINE")

#endif // _javax_swing_text_TabStop_h_