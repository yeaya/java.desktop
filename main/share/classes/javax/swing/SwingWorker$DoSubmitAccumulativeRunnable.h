#ifndef _javax_swing_SwingWorker$DoSubmitAccumulativeRunnable_h_
#define _javax_swing_SwingWorker$DoSubmitAccumulativeRunnable_h_
//$ class javax.swing.SwingWorker$DoSubmitAccumulativeRunnable
//$ extends sun.swing.AccumulativeRunnable
//$ implements java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <sun/swing/AccumulativeRunnable.h>

#pragma push_macro("DELAY")
#undef DELAY

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace swing {

class SwingWorker$DoSubmitAccumulativeRunnable : public ::sun::swing::AccumulativeRunnable, public ::java::awt::event::ActionListener {
	$class(SwingWorker$DoSubmitAccumulativeRunnable, $NO_CLASS_INIT, ::sun::swing::AccumulativeRunnable, ::java::awt::event::ActionListener)
public:
	SwingWorker$DoSubmitAccumulativeRunnable();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
	using ::sun::swing::AccumulativeRunnable::run;
	virtual void run(::java::util::List* args) override;
	virtual void submit() override;
	virtual $String* toString() override;
	static const int32_t DELAY = 33; // 1000 / 30
};

	} // swing
} // javax

#pragma pop_macro("DELAY")

#endif // _javax_swing_SwingWorker$DoSubmitAccumulativeRunnable_h_