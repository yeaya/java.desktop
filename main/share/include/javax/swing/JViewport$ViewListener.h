#ifndef _javax_swing_JViewport$ViewListener_h_
#define _javax_swing_JViewport$ViewListener_h_
//$ class javax.swing.JViewport$ViewListener
//$ extends java.awt.event.ComponentAdapter
//$ implements java.io.Serializable

#include <java/awt/event/ComponentAdapter.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JViewport;
	}
}

namespace javax {
	namespace swing {

class $import JViewport$ViewListener : public ::java::awt::event::ComponentAdapter, public ::java::io::Serializable {
	$class(JViewport$ViewListener, $NO_CLASS_INIT, ::java::awt::event::ComponentAdapter, ::java::io::Serializable)
public:
	JViewport$ViewListener();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JViewport* this$0);
	virtual void componentResized(::java::awt::event::ComponentEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JViewport* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JViewport$ViewListener_h_