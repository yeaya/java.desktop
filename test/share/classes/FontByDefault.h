#ifndef _FontByDefault_h_
#define _FontByDefault_h_
//$ class FontByDefault
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class JFrame;
		class UIManager$LookAndFeelInfo;
	}
}

class $export FontByDefault : public ::java::lang::Runnable {
	$class(FontByDefault, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	FontByDefault();
	void init$();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void main($StringArray* args);
	virtual void run() override;
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void testDefaultFont(::javax::swing::JFrame* frame);
};

#endif // _FontByDefault_h_