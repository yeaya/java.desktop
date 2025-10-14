#ifndef _Test6559154_h_
#define _Test6559154_h_
//$ class Test6559154
//$ extends java.awt.event.ActionListener
//$ implements java.lang.Runnable

#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Container;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JDialog;
	}
}

class $export Test6559154 : public ::java::awt::event::ActionListener, public ::java::lang::Runnable {
	$class(Test6559154, $NO_CLASS_INIT, ::java::awt::event::ActionListener, ::java::lang::Runnable)
public:
	Test6559154();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
	static void main($StringArray* args);
	virtual void run() override;
	static void setEnabledRecursive(::java::awt::Container* container, bool enabled);
	virtual $String* toString() override;
	::javax::swing::JDialog* dialog = nullptr;
};

#endif // _Test6559154_h_