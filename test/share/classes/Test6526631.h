#ifndef _Test6526631_h_
#define _Test6526631_h_
//$ class Test6526631
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("COLS")
#undef COLS
#pragma push_macro("OFFSET")
#undef OFFSET
#pragma push_macro("ROWS")
#undef ROWS

namespace javax {
	namespace swing {
		class JFrame;
		class JScrollPane;
	}
}

class $export Test6526631 : public ::java::lang::Object {
	$class(Test6526631, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Test6526631();
	void init$(::javax::swing::JFrame* frame);
	static void main($StringArray* args);
	void update(int32_t offset);
	virtual void validateFirst();
	virtual void validateSecond();
	virtual void validateThird();
	static const int32_t COLS = 90;
	static const int32_t ROWS = 50;
	static const int32_t OFFSET = 10;
	::javax::swing::JScrollPane* pane = nullptr;
	::javax::swing::JFrame* frame = nullptr;
};

#pragma pop_macro("COLS")
#pragma pop_macro("OFFSET")
#pragma pop_macro("ROWS")

#endif // _Test6526631_h_