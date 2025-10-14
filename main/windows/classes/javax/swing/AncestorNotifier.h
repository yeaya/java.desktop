#ifndef _javax_swing_AncestorNotifier_h_
#define _javax_swing_AncestorNotifier_h_
//$ class javax.swing.AncestorNotifier
//$ extends java.awt.event.ComponentListener
//$ implements java.beans.PropertyChangeListener,java.io.Serializable

#include <java/awt/event/ComponentListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class AncestorListener;
			class EventListenerList;
		}
	}
}

namespace javax {
	namespace swing {

class AncestorNotifier : public ::java::awt::event::ComponentListener, public ::java::beans::PropertyChangeListener, public ::java::io::Serializable {
	$class(AncestorNotifier, $NO_CLASS_INIT, ::java::awt::event::ComponentListener, ::java::beans::PropertyChangeListener, ::java::io::Serializable)
public:
	AncestorNotifier();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JComponent* root);
	virtual void addAncestorListener(::javax::swing::event::AncestorListener* l);
	virtual void addListeners(::java::awt::Component* ancestor, bool addToFirst);
	virtual void componentHidden(::java::awt::event::ComponentEvent* e) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual void componentShown(::java::awt::event::ComponentEvent* e) override;
	virtual void fireAncestorAdded(::javax::swing::JComponent* source, int32_t id, ::java::awt::Container* ancestor, ::java::awt::Container* ancestorParent);
	virtual void fireAncestorMoved(::javax::swing::JComponent* source, int32_t id, ::java::awt::Container* ancestor, ::java::awt::Container* ancestorParent);
	virtual void fireAncestorRemoved(::javax::swing::JComponent* source, int32_t id, ::java::awt::Container* ancestor, ::java::awt::Container* ancestorParent);
	virtual $Array<::javax::swing::event::AncestorListener>* getAncestorListeners();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual void removeAllListeners();
	virtual void removeAncestorListener(::javax::swing::event::AncestorListener* l);
	virtual void removeListeners(::java::awt::Component* ancestor);
	virtual $String* toString() override;
	::java::awt::Component* firstInvisibleAncestor = nullptr;
	::javax::swing::event::EventListenerList* listenerList = nullptr;
	::javax::swing::JComponent* root = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_AncestorNotifier_h_