#ifndef _javax_swing_text_LayoutQueue_h_
#define _javax_swing_text_LayoutQueue_h_
//$ class javax.swing.text.LayoutQueue
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_QUEUE")
#undef DEFAULT_QUEUE

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export LayoutQueue : public ::java::lang::Object {
	$class(LayoutQueue, 0, ::java::lang::Object)
public:
	LayoutQueue();
	void init$();
	virtual void addTask(::java::lang::Runnable* task);
	static ::javax::swing::text::LayoutQueue* getDefaultQueue();
	void lambda$addTask$0();
	static void setDefaultQueue(::javax::swing::text::LayoutQueue* q);
	virtual ::java::lang::Runnable* waitForWork();
	static $Object* DEFAULT_QUEUE;
	::java::util::Vector* tasks = nullptr;
	$Thread* worker = nullptr;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("DEFAULT_QUEUE")

#endif // _javax_swing_text_LayoutQueue_h_