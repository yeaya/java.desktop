#include <javax/swing/SwingWorker$DoSubmitAccumulativeRunnable.h>

#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Runnable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/SwingWorker.h>
#include <javax/swing/Timer.h>
#include <sun/swing/AccumulativeRunnable.h>
#include <jcpp.h>

#undef DELAY

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $SwingWorker = ::javax::swing::SwingWorker;
using $Timer = ::javax::swing::Timer;
using $AccumulativeRunnable = ::sun::swing::AccumulativeRunnable;

namespace javax {
	namespace swing {

$FieldInfo _SwingWorker$DoSubmitAccumulativeRunnable_FieldInfo_[] = {
	{"DELAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SwingWorker$DoSubmitAccumulativeRunnable, DELAY)},
	{}
};

$MethodInfo _SwingWorker$DoSubmitAccumulativeRunnable_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SwingWorker$DoSubmitAccumulativeRunnable::*)()>(&SwingWorker$DoSubmitAccumulativeRunnable::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"run", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/Runnable;>;)V", $PROTECTED},
	{"submit", "()V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SwingWorker$DoSubmitAccumulativeRunnable_InnerClassesInfo_[] = {
	{"javax.swing.SwingWorker$DoSubmitAccumulativeRunnable", "javax.swing.SwingWorker", "DoSubmitAccumulativeRunnable", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SwingWorker$DoSubmitAccumulativeRunnable_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SwingWorker$DoSubmitAccumulativeRunnable",
	"sun.swing.AccumulativeRunnable",
	"java.awt.event.ActionListener",
	_SwingWorker$DoSubmitAccumulativeRunnable_FieldInfo_,
	_SwingWorker$DoSubmitAccumulativeRunnable_MethodInfo_,
	"Lsun/swing/AccumulativeRunnable<Ljava/lang/Runnable;>;Ljava/awt/event/ActionListener;",
	nullptr,
	_SwingWorker$DoSubmitAccumulativeRunnable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.SwingWorker"
};

$Object* allocate$SwingWorker$DoSubmitAccumulativeRunnable($Class* clazz) {
	return $of($alloc(SwingWorker$DoSubmitAccumulativeRunnable));
}

int32_t SwingWorker$DoSubmitAccumulativeRunnable::hashCode() {
	 return this->$AccumulativeRunnable::hashCode();
}

bool SwingWorker$DoSubmitAccumulativeRunnable::equals(Object$* arg0) {
	 return this->$AccumulativeRunnable::equals(arg0);
}

$Object* SwingWorker$DoSubmitAccumulativeRunnable::clone() {
	 return this->$AccumulativeRunnable::clone();
}

$String* SwingWorker$DoSubmitAccumulativeRunnable::toString() {
	 return this->$AccumulativeRunnable::toString();
}

void SwingWorker$DoSubmitAccumulativeRunnable::finalize() {
	this->$AccumulativeRunnable::finalize();
}

void SwingWorker$DoSubmitAccumulativeRunnable::init$() {
	$AccumulativeRunnable::init$();
}

void SwingWorker$DoSubmitAccumulativeRunnable::run($List* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(args)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Runnable, runnable, $cast($Runnable, i$->next()));
			{
				$nc(runnable)->run();
			}
		}
	}
}

void SwingWorker$DoSubmitAccumulativeRunnable::submit() {
	$var($Timer, timer, $new($Timer, SwingWorker$DoSubmitAccumulativeRunnable::DELAY, this));
	timer->setRepeats(false);
	timer->start();
}

void SwingWorker$DoSubmitAccumulativeRunnable::actionPerformed($ActionEvent* event) {
	run();
}

SwingWorker$DoSubmitAccumulativeRunnable::SwingWorker$DoSubmitAccumulativeRunnable() {
}

$Class* SwingWorker$DoSubmitAccumulativeRunnable::load$($String* name, bool initialize) {
	$loadClass(SwingWorker$DoSubmitAccumulativeRunnable, name, initialize, &_SwingWorker$DoSubmitAccumulativeRunnable_ClassInfo_, allocate$SwingWorker$DoSubmitAccumulativeRunnable);
	return class$;
}

$Class* SwingWorker$DoSubmitAccumulativeRunnable::class$ = nullptr;

	} // swing
} // javax