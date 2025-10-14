#ifndef _FileFilterDescription_h_
#define _FileFilterDescription_h_
//$ class FileFilterDescription
//$ extends java.applet.Applet

#include <java/applet/Applet.h>

namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class $export FileFilterDescription : public ::java::applet::Applet {
	$class(FileFilterDescription, $NO_CLASS_INIT, ::java::applet::Applet)
public:
	FileFilterDescription();
	using ::java::applet::Applet::add;
	using ::java::applet::Applet::getMousePosition;
	void init$();
	virtual void init() override;
	static void lambda$test$0(::javax::swing::UIManager$LookAndFeelInfo* info);
	using ::java::applet::Applet::remove;
	using ::java::applet::Applet::list;
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* info);
	virtual void start() override;
	static void test();
};

#endif // _FileFilterDescription_h_