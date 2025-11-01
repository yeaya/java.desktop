#ifndef _javax_swing_plaf_basic_BasicTreeUI$ComponentHandler_h_
#define _javax_swing_plaf_basic_BasicTreeUI$ComponentHandler_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$ComponentHandler
//$ extends java.awt.event.ComponentAdapter
//$ implements java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ComponentAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ComponentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JScrollBar;
		class JScrollPane;
		class Timer;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTreeUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTreeUI$ComponentHandler : public ::java::awt::event::ComponentAdapter, public ::java::awt::event::ActionListener {
	$class(BasicTreeUI$ComponentHandler, $NO_CLASS_INIT, ::java::awt::event::ComponentAdapter, ::java::awt::event::ActionListener)
public:
	BasicTreeUI$ComponentHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	virtual ::javax::swing::JScrollPane* getScrollPane();
	virtual void startTimer();
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicTreeUI* this$0 = nullptr;
	::javax::swing::Timer* timer = nullptr;
	::javax::swing::JScrollBar* scrollBar = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$ComponentHandler_h_