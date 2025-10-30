#ifndef _javax_swing_text_BadLocationException_h_
#define _javax_swing_text_BadLocationException_h_
//$ class javax.swing.text.BadLocationException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace swing {
		namespace text {

class $export BadLocationException : public ::java::lang::Exception {
	$class(BadLocationException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	BadLocationException();
	void init$($String* s, int32_t offs);
	virtual int32_t offsetRequested();
	int32_t offs = 0;
	BadLocationException(const BadLocationException& e);
	virtual void throw$() override;
	inline BadLocationException* operator ->() {
		return (BadLocationException*)throwing$;
	}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_BadLocationException_h_