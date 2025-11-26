#include <javax/swing/tree/RowMapper.h>

#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $TreePathArray = $Array<::javax::swing::tree::TreePath>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace tree {

$MethodInfo _RowMapper_MethodInfo_[] = {
	{"getRowsForPaths", "([Ljavax/swing/tree/TreePath;)[I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RowMapper_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.tree.RowMapper",
	nullptr,
	nullptr,
	nullptr,
	_RowMapper_MethodInfo_
};

$Object* allocate$RowMapper($Class* clazz) {
	return $of($alloc(RowMapper));
}

$Class* RowMapper::load$($String* name, bool initialize) {
	$loadClass(RowMapper, name, initialize, &_RowMapper_ClassInfo_, allocate$RowMapper);
	return class$;
}

$Class* RowMapper::class$ = nullptr;

		} // tree
	} // swing
} // javax