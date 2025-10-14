#ifndef _java_awt_im_InputMethodHighlight_h_
#define _java_awt_im_InputMethodHighlight_h_
//$ class java.awt.im.InputMethodHighlight
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CONVERTED_TEXT")
#undef CONVERTED_TEXT
#pragma push_macro("RAW_TEXT")
#undef RAW_TEXT
#pragma push_macro("SELECTED_CONVERTED_TEXT_HIGHLIGHT")
#undef SELECTED_CONVERTED_TEXT_HIGHLIGHT
#pragma push_macro("SELECTED_RAW_TEXT_HIGHLIGHT")
#undef SELECTED_RAW_TEXT_HIGHLIGHT
#pragma push_macro("UNSELECTED_CONVERTED_TEXT_HIGHLIGHT")
#undef UNSELECTED_CONVERTED_TEXT_HIGHLIGHT
#pragma push_macro("UNSELECTED_RAW_TEXT_HIGHLIGHT")
#undef UNSELECTED_RAW_TEXT_HIGHLIGHT

namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace awt {
		namespace im {

class $export InputMethodHighlight : public ::java::lang::Object {
	$class(InputMethodHighlight, 0, ::java::lang::Object)
public:
	InputMethodHighlight();
	void init$(bool selected, int32_t state);
	void init$(bool selected, int32_t state, int32_t variation);
	void init$(bool selected, int32_t state, int32_t variation, ::java::util::Map* style);
	virtual int32_t getState();
	virtual ::java::util::Map* getStyle();
	virtual int32_t getVariation();
	virtual bool isSelected();
	static const int32_t RAW_TEXT = 0;
	static const int32_t CONVERTED_TEXT = 1;
	static ::java::awt::im::InputMethodHighlight* UNSELECTED_RAW_TEXT_HIGHLIGHT;
	static ::java::awt::im::InputMethodHighlight* SELECTED_RAW_TEXT_HIGHLIGHT;
	static ::java::awt::im::InputMethodHighlight* UNSELECTED_CONVERTED_TEXT_HIGHLIGHT;
	static ::java::awt::im::InputMethodHighlight* SELECTED_CONVERTED_TEXT_HIGHLIGHT;
	bool selected = false;
	int32_t state = 0;
	int32_t variation = 0;
	::java::util::Map* style = nullptr;
};

		} // im
	} // awt
} // java

#pragma pop_macro("CONVERTED_TEXT")
#pragma pop_macro("RAW_TEXT")
#pragma pop_macro("SELECTED_CONVERTED_TEXT_HIGHLIGHT")
#pragma pop_macro("SELECTED_RAW_TEXT_HIGHLIGHT")
#pragma pop_macro("UNSELECTED_CONVERTED_TEXT_HIGHLIGHT")
#pragma pop_macro("UNSELECTED_RAW_TEXT_HIGHLIGHT")

#endif // _java_awt_im_InputMethodHighlight_h_