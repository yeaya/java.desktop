#ifndef _MisplacedBorder_h_
#define _MisplacedBorder_h_
//$ class MisplacedBorder
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

#pragma push_macro("H")
#undef H
#pragma push_macro("W")
#undef W

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace javax {
	namespace swing {
		class JMenuBar;
		class UIManager$LookAndFeelInfo;
	}
}

class $export MisplacedBorder : public ::java::lang::Runnable {
	$class(MisplacedBorder, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	MisplacedBorder();
	void init$();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void main($StringArray* args);
	virtual void run() override;
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	::java::awt::image::BufferedImage* step1(::javax::swing::JMenuBar* menubar);
	::java::awt::image::BufferedImage* step2(::javax::swing::JMenuBar* menubar);
	static const int32_t W = 400;
	static const int32_t H = 400;
};

#pragma pop_macro("H")
#pragma pop_macro("W")

#endif // _MisplacedBorder_h_