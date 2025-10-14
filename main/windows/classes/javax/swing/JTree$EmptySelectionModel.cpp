#include <javax/swing/JTree$EmptySelectionModel.h>

#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTree.h>
#include <javax/swing/event/TreeSelectionListener.h>
#include <javax/swing/tree/DefaultTreeSelectionModel.h>
#include <javax/swing/tree/RowMapper.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $TreePathArray = $Array<::javax::swing::tree::TreePath>;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $TreeSelectionListener = ::javax::swing::event::TreeSelectionListener;
using $DefaultTreeSelectionModel = ::javax::swing::tree::DefaultTreeSelectionModel;
using $RowMapper = ::javax::swing::tree::RowMapper;

namespace javax {
	namespace swing {

$FieldInfo _JTree$EmptySelectionModel_FieldInfo_[] = {
	{"sharedInstance", "Ljavax/swing/JTree$EmptySelectionModel;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(JTree$EmptySelectionModel, sharedInstance$)},
	{}
};

$MethodInfo _JTree$EmptySelectionModel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(JTree$EmptySelectionModel::*)()>(&JTree$EmptySelectionModel::init$))},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"addSelectionPaths", "([Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"addTreeSelectionListener", "(Ljavax/swing/event/TreeSelectionListener;)V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"removeSelectionPaths", "([Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"removeTreeSelectionListener", "(Ljavax/swing/event/TreeSelectionListener;)V", nullptr, $PUBLIC},
	{"setRowMapper", "(Ljavax/swing/tree/RowMapper;)V", nullptr, $PUBLIC},
	{"setSelectionMode", "(I)V", nullptr, $PUBLIC},
	{"setSelectionPaths", "([Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"sharedInstance", "()Ljavax/swing/JTree$EmptySelectionModel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JTree$EmptySelectionModel*(*)()>(&JTree$EmptySelectionModel::sharedInstance))},
	{}
};

$InnerClassInfo _JTree$EmptySelectionModel_InnerClassesInfo_[] = {
	{"javax.swing.JTree$EmptySelectionModel", "javax.swing.JTree", "EmptySelectionModel", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _JTree$EmptySelectionModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTree$EmptySelectionModel",
	"javax.swing.tree.DefaultTreeSelectionModel",
	nullptr,
	_JTree$EmptySelectionModel_FieldInfo_,
	_JTree$EmptySelectionModel_MethodInfo_,
	nullptr,
	nullptr,
	_JTree$EmptySelectionModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTree"
};

$Object* allocate$JTree$EmptySelectionModel($Class* clazz) {
	return $of($alloc(JTree$EmptySelectionModel));
}


JTree$EmptySelectionModel* JTree$EmptySelectionModel::sharedInstance$ = nullptr;

void JTree$EmptySelectionModel::init$() {
	$DefaultTreeSelectionModel::init$();
}

JTree$EmptySelectionModel* JTree$EmptySelectionModel::sharedInstance() {
	$init(JTree$EmptySelectionModel);
	return JTree$EmptySelectionModel::sharedInstance$;
}

void JTree$EmptySelectionModel::setSelectionPaths($TreePathArray* paths) {
}

void JTree$EmptySelectionModel::addSelectionPaths($TreePathArray* paths) {
}

void JTree$EmptySelectionModel::removeSelectionPaths($TreePathArray* paths) {
}

void JTree$EmptySelectionModel::setSelectionMode(int32_t mode) {
}

void JTree$EmptySelectionModel::setRowMapper($RowMapper* mapper) {
}

void JTree$EmptySelectionModel::addTreeSelectionListener($TreeSelectionListener* listener) {
}

void JTree$EmptySelectionModel::removeTreeSelectionListener($TreeSelectionListener* listener) {
}

void JTree$EmptySelectionModel::addPropertyChangeListener($PropertyChangeListener* listener) {
}

void JTree$EmptySelectionModel::removePropertyChangeListener($PropertyChangeListener* listener) {
}

void clinit$JTree$EmptySelectionModel($Class* class$) {
	$assignStatic(JTree$EmptySelectionModel::sharedInstance$, $new(JTree$EmptySelectionModel));
}

JTree$EmptySelectionModel::JTree$EmptySelectionModel() {
}

$Class* JTree$EmptySelectionModel::load$($String* name, bool initialize) {
	$loadClass(JTree$EmptySelectionModel, name, initialize, &_JTree$EmptySelectionModel_ClassInfo_, clinit$JTree$EmptySelectionModel, allocate$JTree$EmptySelectionModel);
	return class$;
}

$Class* JTree$EmptySelectionModel::class$ = nullptr;

	} // swing
} // javax