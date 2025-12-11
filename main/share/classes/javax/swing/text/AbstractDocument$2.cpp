#include <javax/swing/text/AbstractDocument$2.h>

#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <javax/swing/text/AbstractDocument.h>
#include <jcpp.h>

#undef INSERT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$DefaultDocumentEvent = ::javax::swing::text::AbstractDocument$DefaultDocumentEvent;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _AbstractDocument$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/AbstractDocument;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractDocument$2, this$0)},
	{}
};

$MethodInfo _AbstractDocument$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AbstractDocument;)V", nullptr, 0, $method(static_cast<void(AbstractDocument$2::*)($AbstractDocument*)>(&AbstractDocument$2::init$))},
	{"validateObject", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AbstractDocument$2_EnclosingMethodInfo_ = {
	"javax.swing.text.AbstractDocument",
	"readObject",
	"(Ljava/io/ObjectInputStream;)V"
};

$InnerClassInfo _AbstractDocument$2_InnerClassesInfo_[] = {
	{"javax.swing.text.AbstractDocument$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractDocument$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.AbstractDocument$2",
	"java.lang.Object",
	"java.io.ObjectInputValidation",
	_AbstractDocument$2_FieldInfo_,
	_AbstractDocument$2_MethodInfo_,
	nullptr,
	&_AbstractDocument$2_EnclosingMethodInfo_,
	_AbstractDocument$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AbstractDocument"
};

$Object* allocate$AbstractDocument$2($Class* clazz) {
	return $of($alloc(AbstractDocument$2));
}

void AbstractDocument$2::init$($AbstractDocument* this$0) {
	$set(this, this$0, this$0);
}

void AbstractDocument$2::validateObject() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->this$0->writeLock();
			$init($DocumentEvent$EventType);
			$var($AbstractDocument$DefaultDocumentEvent, e, $new($AbstractDocument$DefaultDocumentEvent, this->this$0, 0, this->this$0->getLength(), $DocumentEvent$EventType::INSERT));
			this->this$0->updateBidi(e);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->this$0->writeUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

AbstractDocument$2::AbstractDocument$2() {
}

$Class* AbstractDocument$2::load$($String* name, bool initialize) {
	$loadClass(AbstractDocument$2, name, initialize, &_AbstractDocument$2_ClassInfo_, allocate$AbstractDocument$2);
	return class$;
}

$Class* AbstractDocument$2::class$ = nullptr;

		} // text
	} // swing
} // javax