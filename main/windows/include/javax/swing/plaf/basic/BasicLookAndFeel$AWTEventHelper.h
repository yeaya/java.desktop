#ifndef _javax_swing_plaf_basic_BasicLookAndFeel$AWTEventHelper_h_
#define _javax_swing_plaf_basic_BasicLookAndFeel$AWTEventHelper_h_
//$ class javax.swing.plaf.basic.BasicLookAndFeel$AWTEventHelper
//$ extends java.awt.event.AWTEventListener
//$ implements java.security.PrivilegedAction

#include <java/awt/event/AWTEventListener.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicLookAndFeel;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicLookAndFeel$AWTEventHelper : public ::java::awt::event::AWTEventListener, public ::java::security::PrivilegedAction {
	$class(BasicLookAndFeel$AWTEventHelper, $NO_CLASS_INIT, ::java::awt::event::AWTEventListener, ::java::security::PrivilegedAction)
public:
	BasicLookAndFeel$AWTEventHelper();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicLookAndFeel* this$0);
	virtual void eventDispatched(::java::awt::AWTEvent* ev) override;
	virtual $Object* run() override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicLookAndFeel* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicLookAndFeel$AWTEventHelper_h_