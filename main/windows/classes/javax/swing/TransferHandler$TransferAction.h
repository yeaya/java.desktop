#ifndef _javax_swing_TransferHandler$TransferAction_h_
#define _javax_swing_TransferHandler$TransferAction_h_
//$ class javax.swing.TransferHandler$TransferAction
//$ extends sun.swing.UIAction
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <sun/swing/UIAction.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class Clipboard;
		}
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
		class JComponent;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaSecurityAccess;
		}
	}
}

namespace javax {
	namespace swing {

class $export TransferHandler$TransferAction : public ::sun::swing::UIAction, public ::javax::swing::plaf::UIResource {
	$class(TransferHandler$TransferAction, 0, ::sun::swing::UIAction, ::javax::swing::plaf::UIResource)
public:
	TransferHandler$TransferAction();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name);
	virtual bool accept(Object$* sender) override;
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	void actionPerformedImpl(::java::awt::event::ActionEvent* e);
	::java::awt::datatransfer::Clipboard* getClipboard(::javax::swing::JComponent* c);
	virtual $String* toString() override;
	static ::jdk::internal::access::JavaSecurityAccess* javaSecurityAccess;
	static $Object* SandboxClipboardKey;
};

	} // swing
} // javax

#endif // _javax_swing_TransferHandler$TransferAction_h_