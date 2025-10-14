#include <javax/swing/tree/PathPlaceHolder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _PathPlaceHolder_FieldInfo_[] = {
	{"isNew", "Z", nullptr, $PROTECTED, $field(PathPlaceHolder, isNew)},
	{"path", "Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $field(PathPlaceHolder, path)},
	{}
};

$MethodInfo _PathPlaceHolder_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/TreePath;Z)V", nullptr, 0, $method(static_cast<void(PathPlaceHolder::*)($TreePath*,bool)>(&PathPlaceHolder::init$))},
	{}
};

$ClassInfo _PathPlaceHolder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.tree.PathPlaceHolder",
	"java.lang.Object",
	nullptr,
	_PathPlaceHolder_FieldInfo_,
	_PathPlaceHolder_MethodInfo_
};

$Object* allocate$PathPlaceHolder($Class* clazz) {
	return $of($alloc(PathPlaceHolder));
}

void PathPlaceHolder::init$($TreePath* path, bool isNew) {
	$set(this, path, path);
	this->isNew = isNew;
}

PathPlaceHolder::PathPlaceHolder() {
}

$Class* PathPlaceHolder::load$($String* name, bool initialize) {
	$loadClass(PathPlaceHolder, name, initialize, &_PathPlaceHolder_ClassInfo_, allocate$PathPlaceHolder);
	return class$;
}

$Class* PathPlaceHolder::class$ = nullptr;

		} // tree
	} // swing
} // javax