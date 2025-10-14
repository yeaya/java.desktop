#ifndef _Test8013370_h_
#define _Test8013370_h_
//$ class Test8013370
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export Test8013370 : public ::java::lang::Runnable {
	$class(Test8013370, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Test8013370();
	void init$();
	static void main($StringArray* args);
	virtual void run() override;
	void validate();
	::javax::swing::JFrame* frame = nullptr;
	bool error = false;
};

#endif // _Test8013370_h_