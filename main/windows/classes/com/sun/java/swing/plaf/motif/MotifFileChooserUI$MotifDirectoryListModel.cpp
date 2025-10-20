#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$MotifDirectoryListModel.h>

#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <jcpp.h>

using $MotifFileChooserUI = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifFileChooserUI$MotifDirectoryListModel_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$MotifDirectoryListModel, this$0)},
	{}
};

$MethodInfo _MotifFileChooserUI$MotifDirectoryListModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifFileChooserUI$MotifDirectoryListModel::*)($MotifFileChooserUI*)>(&MotifFileChooserUI$MotifDirectoryListModel::init$))},
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"fireContentsChanged", "()V", nullptr, $PUBLIC},
	{"getElementAt", "(I)Ljava/io/File;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifFileChooserUI$MotifDirectoryListModel_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$MotifDirectoryListModel", "com.sun.java.swing.plaf.motif.MotifFileChooserUI", "MotifDirectoryListModel", $PROTECTED},
	{}
};

$ClassInfo _MotifFileChooserUI$MotifDirectoryListModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI$MotifDirectoryListModel",
	"javax.swing.AbstractListModel",
	"javax.swing.event.ListDataListener",
	_MotifFileChooserUI$MotifDirectoryListModel_FieldInfo_,
	_MotifFileChooserUI$MotifDirectoryListModel_MethodInfo_,
	"Ljavax/swing/AbstractListModel<Ljava/io/File;>;Ljavax/swing/event/ListDataListener;",
	nullptr,
	_MotifFileChooserUI$MotifDirectoryListModel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
};

$Object* allocate$MotifFileChooserUI$MotifDirectoryListModel($Class* clazz) {
	return $of($alloc(MotifFileChooserUI$MotifDirectoryListModel));
}

int32_t MotifFileChooserUI$MotifDirectoryListModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool MotifFileChooserUI$MotifDirectoryListModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* MotifFileChooserUI$MotifDirectoryListModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* MotifFileChooserUI$MotifDirectoryListModel::toString() {
	 return this->$AbstractListModel::toString();
}

void MotifFileChooserUI$MotifDirectoryListModel::finalize() {
	this->$AbstractListModel::finalize();
}

void MotifFileChooserUI$MotifDirectoryListModel::init$($MotifFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$nc($(this$0->getModel()))->addListDataListener(this);
}

int32_t MotifFileChooserUI$MotifDirectoryListModel::getSize() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($(this->this$0->getModel()))->getDirectories()))->size();
}

$Object* MotifFileChooserUI$MotifDirectoryListModel::getElementAt(int32_t index) {
	$useLocalCurrentObjectStackCache();
	return $of($cast($File, $nc($($nc($(this->this$0->getModel()))->getDirectories()))->elementAt(index)));
}

void MotifFileChooserUI$MotifDirectoryListModel::intervalAdded($ListDataEvent* e) {
	int32_t var$0 = $nc(e)->getIndex0();
	fireIntervalAdded(this, var$0, e->getIndex1());
}

void MotifFileChooserUI$MotifDirectoryListModel::intervalRemoved($ListDataEvent* e) {
	int32_t var$0 = $nc(e)->getIndex0();
	fireIntervalRemoved(this, var$0, e->getIndex1());
}

void MotifFileChooserUI$MotifDirectoryListModel::fireContentsChanged() {
	$useLocalCurrentObjectStackCache();
	fireContentsChanged(this, 0, $nc($($nc($(this->this$0->getModel()))->getDirectories()))->size() - 1);
}

void MotifFileChooserUI$MotifDirectoryListModel::contentsChanged($ListDataEvent* e) {
	fireContentsChanged();
}

MotifFileChooserUI$MotifDirectoryListModel::MotifFileChooserUI$MotifDirectoryListModel() {
}

$Class* MotifFileChooserUI$MotifDirectoryListModel::load$($String* name, bool initialize) {
	$loadClass(MotifFileChooserUI$MotifDirectoryListModel, name, initialize, &_MotifFileChooserUI$MotifDirectoryListModel_ClassInfo_, allocate$MotifFileChooserUI$MotifDirectoryListModel);
	return class$;
}

$Class* MotifFileChooserUI$MotifDirectoryListModel::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com