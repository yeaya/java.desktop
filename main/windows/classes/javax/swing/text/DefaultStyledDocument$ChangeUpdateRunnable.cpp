#include <javax/swing/text/DefaultStyledDocument$ChangeUpdateRunnable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AbstractDocument$DefaultDocumentEvent.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <jcpp.h>

#undef CHANGE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$DefaultDocumentEvent = ::javax::swing::text::AbstractDocument$DefaultDocumentEvent;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $CompoundEdit = ::javax::swing::undo::CompoundEdit;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultStyledDocument$ChangeUpdateRunnable_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/DefaultStyledDocument;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultStyledDocument$ChangeUpdateRunnable, this$0)},
	{"isPending", "Z", nullptr, 0, $field(DefaultStyledDocument$ChangeUpdateRunnable, isPending)},
	{}
};

$MethodInfo _DefaultStyledDocument$ChangeUpdateRunnable_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/DefaultStyledDocument;)V", nullptr, 0, $method(static_cast<void(DefaultStyledDocument$ChangeUpdateRunnable::*)($DefaultStyledDocument*)>(&DefaultStyledDocument$ChangeUpdateRunnable::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultStyledDocument$ChangeUpdateRunnable_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultStyledDocument$ChangeUpdateRunnable", "javax.swing.text.DefaultStyledDocument", "ChangeUpdateRunnable", 0},
	{}
};

$ClassInfo _DefaultStyledDocument$ChangeUpdateRunnable_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultStyledDocument$ChangeUpdateRunnable",
	"java.lang.Object",
	"java.lang.Runnable",
	_DefaultStyledDocument$ChangeUpdateRunnable_FieldInfo_,
	_DefaultStyledDocument$ChangeUpdateRunnable_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultStyledDocument$ChangeUpdateRunnable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultStyledDocument"
};

$Object* allocate$DefaultStyledDocument$ChangeUpdateRunnable($Class* clazz) {
	return $of($alloc(DefaultStyledDocument$ChangeUpdateRunnable));
}

void DefaultStyledDocument$ChangeUpdateRunnable::init$($DefaultStyledDocument* this$0) {
	$set(this, this$0, this$0);
	this->isPending = false;
}

void DefaultStyledDocument$ChangeUpdateRunnable::run() {
	$synchronized(this) {
		this->isPending = false;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->this$0->writeLock();
			$init($DocumentEvent$EventType);
			$var($AbstractDocument$DefaultDocumentEvent, dde, $new($AbstractDocument$DefaultDocumentEvent, this->this$0, 0, this->this$0->getLength(), $DocumentEvent$EventType::CHANGE));
			dde->end();
			this->this$0->fireChangedUpdate(dde);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->this$0->writeUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

DefaultStyledDocument$ChangeUpdateRunnable::DefaultStyledDocument$ChangeUpdateRunnable() {
}

$Class* DefaultStyledDocument$ChangeUpdateRunnable::load$($String* name, bool initialize) {
	$loadClass(DefaultStyledDocument$ChangeUpdateRunnable, name, initialize, &_DefaultStyledDocument$ChangeUpdateRunnable_ClassInfo_, allocate$DefaultStyledDocument$ChangeUpdateRunnable);
	return class$;
}

$Class* DefaultStyledDocument$ChangeUpdateRunnable::class$ = nullptr;

		} // text
	} // swing
} // javax