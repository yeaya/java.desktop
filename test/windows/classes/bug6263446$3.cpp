#include <bug6263446$3.h>

#include <bug6263446.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Field.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultTreeCellEditor.h>
#include <javax/swing/tree/TreeCellEditor.h>
#include <jcpp.h>

using $bug6263446 = ::bug6263446;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JTree = ::javax::swing::JTree;
using $DefaultTreeCellEditor = ::javax::swing::tree::DefaultTreeCellEditor;
using $TreeCellEditor = ::javax::swing::tree::TreeCellEditor;

$FieldInfo _bug6263446$3_FieldInfo_[] = {
	{"val$clicks", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug6263446$3, val$clicks)},
	{}
};

$MethodInfo _bug6263446$3_MethodInfo_[] = {
	{"<init>", "(I)V", "()V", 0, $method(static_cast<void(bug6263446$3::*)(int32_t)>(&bug6263446$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6263446$3_EnclosingMethodInfo_ = {
	"bug6263446",
	"setClickCountToStart",
	"(I)V"
};

$InnerClassInfo _bug6263446$3_InnerClassesInfo_[] = {
	{"bug6263446$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6263446$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug6263446$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6263446$3_FieldInfo_,
	_bug6263446$3_MethodInfo_,
	nullptr,
	&_bug6263446$3_EnclosingMethodInfo_,
	_bug6263446$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6263446"
};

$Object* allocate$bug6263446$3($Class* clazz) {
	return $of($alloc(bug6263446$3));
}

void bug6263446$3::init$(int32_t val$clicks) {
	this->val$clicks = val$clicks;
}

void bug6263446$3::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$init($bug6263446);
		$var($DefaultTreeCellEditor, editor, $cast($DefaultTreeCellEditor, $nc($bug6263446::tree)->getCellEditor()));
		$load($DefaultTreeCellEditor);
		$var($Field, field, $DefaultTreeCellEditor::class$->getDeclaredField("realEditor"_s));
		$nc(field)->setAccessible(true);
		$var($DefaultCellEditor, ce, $cast($DefaultCellEditor, field->get(editor)));
		$nc(ce)->setClickCountToStart(this->val$clicks);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($NoSuchFieldException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

bug6263446$3::bug6263446$3() {
}

$Class* bug6263446$3::load$($String* name, bool initialize) {
	$loadClass(bug6263446$3, name, initialize, &_bug6263446$3_ClassInfo_, allocate$bug6263446$3);
	return class$;
}

$Class* bug6263446$3::class$ = nullptr;