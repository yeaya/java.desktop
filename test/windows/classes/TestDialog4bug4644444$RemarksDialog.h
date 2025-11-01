#ifndef _TestDialog4bug4644444$RemarksDialog_h_
#define _TestDialog4bug4644444$RemarksDialog_h_
//$ class TestDialog4bug4644444$RemarksDialog
//$ extends java.awt.Dialog
//$ implements java.awt.event.ActionListener

#include <java/awt/Dialog.h>
#include <java/awt/event/ActionListener.h>

class TestDialog4bug4644444;
namespace java {
	namespace awt {
		class Button;
		class Panel;
		class TextArea;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class TestDialog4bug4644444$RemarksDialog : public ::java::awt::Dialog, public ::java::awt::event::ActionListener {
	$class(TestDialog4bug4644444$RemarksDialog, $NO_CLASS_INIT, ::java::awt::Dialog, ::java::awt::event::ActionListener)
public:
	TestDialog4bug4644444$RemarksDialog();
	using ::java::awt::Dialog::add;
	using ::java::awt::Dialog::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::TestDialog4bug4644444* this$0, ::java::awt::Dialog* owner, $String* title, bool modal);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	using ::java::awt::Dialog::show;
	using ::java::awt::Dialog::isFocusCycleRoot;
	using ::java::awt::Dialog::remove;
	using ::java::awt::Dialog::list;
	virtual $String* toString() override;
	::TestDialog4bug4644444* this$0 = nullptr;
	::java::awt::Panel* rootPanel = nullptr;
	::java::awt::Panel* remarksPanel = nullptr;
	::java::awt::TextArea* textarea = nullptr;
	::java::awt::Button* addRemarks = nullptr;
	::java::awt::Button* cancelRemarks = nullptr;
};

#endif // _TestDialog4bug4644444$RemarksDialog_h_