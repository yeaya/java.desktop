#include <javax/swing/undo/StateEditable.h>

#include <java/util/Hashtable.h>
#include <jcpp.h>

#undef RCSID

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;

namespace javax {
	namespace swing {
		namespace undo {

$FieldInfo _StateEditable_FieldInfo_[] = {
	{"RCSID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StateEditable, RCSID)},
	{}
};

$MethodInfo _StateEditable_MethodInfo_[] = {
	{"restoreState", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", $PUBLIC | $ABSTRACT},
	{"storeState", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;)V", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _StateEditable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.undo.StateEditable",
	nullptr,
	nullptr,
	_StateEditable_FieldInfo_,
	_StateEditable_MethodInfo_
};

$Object* allocate$StateEditable($Class* clazz) {
	return $of($alloc(StateEditable));
}

$String* StateEditable::RCSID = nullptr;

void clinit$StateEditable($Class* class$) {
	$assignStatic(StateEditable::RCSID, "$Id: StateEditable.java,v 1.2 1997/09/08 19:39:08 marklin Exp $"_s);
}

$Class* StateEditable::load$($String* name, bool initialize) {
	$loadClass(StateEditable, name, initialize, &_StateEditable_ClassInfo_, clinit$StateEditable, allocate$StateEditable);
	return class$;
}

$Class* StateEditable::class$ = nullptr;

		} // undo
	} // swing
} // javax