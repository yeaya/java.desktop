#include <sun/print/PrintJob2D$MessageQ.h>

#include <java/awt/Graphics2D.h>
#include <java/lang/InterruptedException.h>
#include <java/util/ArrayList.h>
#include <sun/print/PrintJob2D.h>
#include <jcpp.h>

using $Graphics2D = ::java::awt::Graphics2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $PrintJob2D = ::sun::print::PrintJob2D;

namespace sun {
	namespace print {

$FieldInfo _PrintJob2D$MessageQ_FieldInfo_[] = {
	{"this$0", "Lsun/print/PrintJob2D;", nullptr, $FINAL | $SYNTHETIC, $field(PrintJob2D$MessageQ, this$0)},
	{"qid", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PrintJob2D$MessageQ, qid)},
	{"queue", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/awt/Graphics2D;>;", $PRIVATE, $field(PrintJob2D$MessageQ, queue)},
	{}
};

$MethodInfo _PrintJob2D$MessageQ_MethodInfo_[] = {
	{"<init>", "(Lsun/print/PrintJob2D;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(PrintJob2D$MessageQ::*)($PrintJob2D*,$String*)>(&PrintJob2D$MessageQ::init$))},
	{"append", "(Ljava/awt/Graphics2D;)Z", nullptr, $SYNCHRONIZED},
	{"close", "()V", nullptr, $SYNCHRONIZED},
	{"closeWhenEmpty", "()V", nullptr, $SYNCHRONIZED},
	{"isClosed", "()Z", nullptr, $SYNCHRONIZED},
	{"pop", "()Ljava/awt/Graphics2D;", nullptr, $SYNCHRONIZED},
	{}
};

$InnerClassInfo _PrintJob2D$MessageQ_InnerClassesInfo_[] = {
	{"sun.print.PrintJob2D$MessageQ", "sun.print.PrintJob2D", "MessageQ", $PRIVATE},
	{}
};

$ClassInfo _PrintJob2D$MessageQ_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.PrintJob2D$MessageQ",
	"java.lang.Object",
	nullptr,
	_PrintJob2D$MessageQ_FieldInfo_,
	_PrintJob2D$MessageQ_MethodInfo_,
	nullptr,
	nullptr,
	_PrintJob2D$MessageQ_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.PrintJob2D"
};

$Object* allocate$PrintJob2D$MessageQ($Class* clazz) {
	return $of($alloc(PrintJob2D$MessageQ));
}

void PrintJob2D$MessageQ::init$($PrintJob2D* this$0, $String* id) {
	$set(this, this$0, this$0);
	$set(this, qid, "noname"_s);
	$set(this, queue, $new($ArrayList));
	$set(this, qid, id);
}

void PrintJob2D$MessageQ::closeWhenEmpty() {
	$synchronized(this) {
		while (this->queue != nullptr && $nc(this->queue)->size() > 0) {
			try {
				$of(this)->wait(1000);
			} catch ($InterruptedException& e) {
			}
		}
		$set(this, queue, nullptr);
		$of(this)->notifyAll();
	}
}

void PrintJob2D$MessageQ::close() {
	$synchronized(this) {
		$set(this, queue, nullptr);
		$of(this)->notifyAll();
	}
}

bool PrintJob2D$MessageQ::append($Graphics2D* g) {
	$synchronized(this) {
		bool queued = false;
		if (this->queue != nullptr) {
			$nc(this->queue)->add(g);
			queued = true;
			$of(this)->notify();
		}
		return queued;
	}
}

$Graphics2D* PrintJob2D$MessageQ::pop() {
	$synchronized(this) {
		$var($Graphics2D, g, nullptr);
		while (g == nullptr && this->queue != nullptr) {
			if ($nc(this->queue)->size() > 0) {
				$assign(g, $cast($Graphics2D, $nc(this->queue)->remove(0)));
				$of(this)->notify();
			} else {
				try {
					$of(this)->wait(2000);
				} catch ($InterruptedException& e) {
				}
			}
		}
		return g;
	}
}

bool PrintJob2D$MessageQ::isClosed() {
	$synchronized(this) {
		return this->queue == nullptr;
	}
}

PrintJob2D$MessageQ::PrintJob2D$MessageQ() {
}

$Class* PrintJob2D$MessageQ::load$($String* name, bool initialize) {
	$loadClass(PrintJob2D$MessageQ, name, initialize, &_PrintJob2D$MessageQ_ClassInfo_, allocate$PrintJob2D$MessageQ);
	return class$;
}

$Class* PrintJob2D$MessageQ::class$ = nullptr;

	} // print
} // sun