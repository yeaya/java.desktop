#ifndef _bug4514858_h_
#define _bug4514858_h_
//$ class bug4514858
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>

class bug4514858$Test;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export bug4514858 : public ::java::awt::event::ActionListener {
	$class(bug4514858, 0, ::java::awt::event::ActionListener)
public:
	bug4514858();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void createAndShowGUI();
	bool isSupportedLAF($String* str);
	static void main($StringArray* argv);
	static $String* intructions;
	static ::bug4514858$Test* test;
	::javax::swing::JFrame* fr = nullptr;
};

#endif // _bug4514858_h_