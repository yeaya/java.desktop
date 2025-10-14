#ifndef _javax_swing_UnsupportedLookAndFeelException_h_
#define _javax_swing_UnsupportedLookAndFeelException_h_
//$ class javax.swing.UnsupportedLookAndFeelException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace swing {

class $export UnsupportedLookAndFeelException : public ::java::lang::Exception {
	$class(UnsupportedLookAndFeelException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	UnsupportedLookAndFeelException();
	void init$($String* s);
	UnsupportedLookAndFeelException(const UnsupportedLookAndFeelException& e);
	UnsupportedLookAndFeelException wrapper$();
	virtual void throwWrapper$() override;
};

	} // swing
} // javax

#endif // _javax_swing_UnsupportedLookAndFeelException_h_