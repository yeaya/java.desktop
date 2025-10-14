#ifndef _javax_swing_text_ChangedCharSetException_h_
#define _javax_swing_text_ChangedCharSetException_h_
//$ class javax.swing.text.ChangedCharSetException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace javax {
	namespace swing {
		namespace text {

class $import ChangedCharSetException : public ::java::io::IOException {
	$class(ChangedCharSetException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	ChangedCharSetException();
	void init$($String* charSetSpec, bool charSetKey);
	virtual $String* getCharSetSpec();
	virtual bool keyEqualsCharSet();
	$String* charSetSpec = nullptr;
	bool charSetKey = false;
	ChangedCharSetException(const ChangedCharSetException& e);
	ChangedCharSetException wrapper$();
	virtual void throwWrapper$() override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_ChangedCharSetException_h_