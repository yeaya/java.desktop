#ifndef _sun_swing_AccumulativeRunnable_h_
#define _sun_swing_AccumulativeRunnable_h_
//$ class sun.swing.AccumulativeRunnable
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace swing {

class $export AccumulativeRunnable : public ::java::lang::Runnable {
	$class(AccumulativeRunnable, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AccumulativeRunnable();
	void init$();
	void add($ObjectArray* args);
	::java::util::List* flush();
	virtual void run(::java::util::List* args) {}
	virtual void run() override;
	virtual void submit();
	::java::util::List* arguments = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_AccumulativeRunnable_h_