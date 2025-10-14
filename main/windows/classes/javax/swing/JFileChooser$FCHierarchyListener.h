#ifndef _javax_swing_JFileChooser$FCHierarchyListener_h_
#define _javax_swing_JFileChooser$FCHierarchyListener_h_
//$ class javax.swing.JFileChooser$FCHierarchyListener
//$ extends java.awt.event.HierarchyListener
//$ implements java.io.Serializable

#include <java/awt/event/HierarchyListener.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace event {
			class HierarchyEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
	}
}

namespace javax {
	namespace swing {

class JFileChooser$FCHierarchyListener : public ::java::awt::event::HierarchyListener, public ::java::io::Serializable {
	$class(JFileChooser$FCHierarchyListener, $NO_CLASS_INIT, ::java::awt::event::HierarchyListener, ::java::io::Serializable)
public:
	JFileChooser$FCHierarchyListener();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JFileChooser* this$0);
	virtual void hierarchyChanged(::java::awt::event::HierarchyEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JFileChooser* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JFileChooser$FCHierarchyListener_h_