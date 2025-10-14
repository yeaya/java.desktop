#include <javax/swing/BufferStrategyPaintManager$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/BufferStrategyPaintManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $BufferStrategyPaintManager = ::javax::swing::BufferStrategyPaintManager;

namespace javax {
	namespace swing {

$FieldInfo _BufferStrategyPaintManager$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/BufferStrategyPaintManager;", nullptr, $FINAL | $SYNTHETIC, $field(BufferStrategyPaintManager$1, this$0)},
	{}
};

$MethodInfo _BufferStrategyPaintManager$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/BufferStrategyPaintManager;)V", nullptr, 0, $method(static_cast<void(BufferStrategyPaintManager$1::*)($BufferStrategyPaintManager*)>(&BufferStrategyPaintManager$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BufferStrategyPaintManager$1_EnclosingMethodInfo_ = {
	"javax.swing.BufferStrategyPaintManager",
	"dispose",
	"()V"
};

$InnerClassInfo _BufferStrategyPaintManager$1_InnerClassesInfo_[] = {
	{"javax.swing.BufferStrategyPaintManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BufferStrategyPaintManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.BufferStrategyPaintManager$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_BufferStrategyPaintManager$1_FieldInfo_,
	_BufferStrategyPaintManager$1_MethodInfo_,
	nullptr,
	&_BufferStrategyPaintManager$1_EnclosingMethodInfo_,
	_BufferStrategyPaintManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.BufferStrategyPaintManager"
};

$Object* allocate$BufferStrategyPaintManager$1($Class* clazz) {
	return $of($alloc(BufferStrategyPaintManager$1));
}

void BufferStrategyPaintManager$1::init$($BufferStrategyPaintManager* this$0) {
	$set(this, this$0, this$0);
}

void BufferStrategyPaintManager$1::run() {
	$var($List, bufferInfos, nullptr);
	$synchronized(this->this$0) {
		while (this->this$0->showing) {
			try {
				$of(this->this$0)->wait();
			} catch ($InterruptedException&) {
				$catch();
			}
		}
		$assign(bufferInfos, this->this$0->bufferInfos);
		$set(this->this$0, bufferInfos, nullptr);
	}
	this->this$0->dispose(bufferInfos);
}

BufferStrategyPaintManager$1::BufferStrategyPaintManager$1() {
}

$Class* BufferStrategyPaintManager$1::load$($String* name, bool initialize) {
	$loadClass(BufferStrategyPaintManager$1, name, initialize, &_BufferStrategyPaintManager$1_ClassInfo_, allocate$BufferStrategyPaintManager$1);
	return class$;
}

$Class* BufferStrategyPaintManager$1::class$ = nullptr;

	} // swing
} // javax