#ifndef _javax_swing_JTree$TreeSelectionRedirector_h_
#define _javax_swing_JTree$TreeSelectionRedirector_h_
//$ class javax.swing.JTree$TreeSelectionRedirector
//$ extends java.io.Serializable
//$ implements javax.swing.event.TreeSelectionListener

#include <java/io/Serializable.h>
#include <javax/swing/event/TreeSelectionListener.h>

namespace javax {
	namespace swing {
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class TreeSelectionEvent;
		}
	}
}

namespace javax {
	namespace swing {

class $export JTree$TreeSelectionRedirector : public ::java::io::Serializable, public ::javax::swing::event::TreeSelectionListener {
	$class(JTree$TreeSelectionRedirector, $NO_CLASS_INIT, ::java::io::Serializable, ::javax::swing::event::TreeSelectionListener)
public:
	JTree$TreeSelectionRedirector();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JTree* this$0);
	virtual $String* toString() override;
	virtual void valueChanged(::javax::swing::event::TreeSelectionEvent* e) override;
	::javax::swing::JTree* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTree$TreeSelectionRedirector_h_