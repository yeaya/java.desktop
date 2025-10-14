#include <sun/awt/shell/ShellFolderColumnInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <javax/swing/SortOrder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $SortOrder = ::javax::swing::SortOrder;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _ShellFolderColumnInfo_FieldInfo_[] = {
	{"title", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ShellFolderColumnInfo, title)},
	{"width", "Ljava/lang/Integer;", nullptr, $PRIVATE, $field(ShellFolderColumnInfo, width)},
	{"visible", "Z", nullptr, $PRIVATE, $field(ShellFolderColumnInfo, visible)},
	{"alignment", "Ljava/lang/Integer;", nullptr, $PRIVATE, $field(ShellFolderColumnInfo, alignment)},
	{"sortOrder", "Ljavax/swing/SortOrder;", nullptr, $PRIVATE, $field(ShellFolderColumnInfo, sortOrder)},
	{"comparator", "Ljava/util/Comparator;", "Ljava/util/Comparator<*>;", $PRIVATE, $field(ShellFolderColumnInfo, comparator)},
	{"compareByColumn", "Z", nullptr, $PRIVATE, $field(ShellFolderColumnInfo, compareByColumn)},
	{}
};

$MethodInfo _ShellFolderColumnInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;ZLjavax/swing/SortOrder;Ljava/util/Comparator;Z)V", "(Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;ZLjavax/swing/SortOrder;Ljava/util/Comparator<*>;Z)V", $PUBLIC, $method(static_cast<void(ShellFolderColumnInfo::*)($String*,$Integer*,$Integer*,bool,$SortOrder*,$Comparator*,bool)>(&ShellFolderColumnInfo::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;ZLjavax/swing/SortOrder;Ljava/util/Comparator;)V", "(Ljava/lang/String;Ljava/lang/Integer;Ljava/lang/Integer;ZLjavax/swing/SortOrder;Ljava/util/Comparator<*>;)V", $PUBLIC, $method(static_cast<void(ShellFolderColumnInfo::*)($String*,$Integer*,$Integer*,bool,$SortOrder*,$Comparator*)>(&ShellFolderColumnInfo::init$))},
	{"<init>", "(Ljava/lang/String;IIZ)V", nullptr, $PUBLIC, $method(static_cast<void(ShellFolderColumnInfo::*)($String*,int32_t,int32_t,bool)>(&ShellFolderColumnInfo::init$))},
	{"getAlignment", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<*>;", $PUBLIC},
	{"getSortOrder", "()Ljavax/swing/SortOrder;", nullptr, $PUBLIC},
	{"getTitle", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getWidth", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{"isCompareByColumn", "()Z", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"setAlignment", "(Ljava/lang/Integer;)V", nullptr, $PUBLIC},
	{"setComparator", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<*>;)V", $PUBLIC},
	{"setCompareByColumn", "(Z)V", nullptr, $PUBLIC},
	{"setSortOrder", "(Ljavax/swing/SortOrder;)V", nullptr, $PUBLIC},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setWidth", "(Ljava/lang/Integer;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ShellFolderColumnInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.shell.ShellFolderColumnInfo",
	"java.lang.Object",
	nullptr,
	_ShellFolderColumnInfo_FieldInfo_,
	_ShellFolderColumnInfo_MethodInfo_
};

$Object* allocate$ShellFolderColumnInfo($Class* clazz) {
	return $of($alloc(ShellFolderColumnInfo));
}

void ShellFolderColumnInfo::init$($String* title, $Integer* width, $Integer* alignment, bool visible, $SortOrder* sortOrder, $Comparator* comparator, bool compareByColumn) {
	$set(this, title, title);
	$set(this, width, width);
	$set(this, alignment, alignment);
	this->visible = visible;
	$set(this, sortOrder, sortOrder);
	$set(this, comparator, comparator);
	this->compareByColumn = compareByColumn;
}

void ShellFolderColumnInfo::init$($String* title, $Integer* width, $Integer* alignment, bool visible, $SortOrder* sortOrder, $Comparator* comparator) {
	ShellFolderColumnInfo::init$(title, width, alignment, visible, sortOrder, comparator, false);
}

void ShellFolderColumnInfo::init$($String* title, int32_t width, int32_t alignment, bool visible) {
	$var($String, var$0, title);
	$var($Integer, var$1, $Integer::valueOf(width));
	ShellFolderColumnInfo::init$(var$0, var$1, $($Integer::valueOf(alignment)), visible, nullptr, nullptr);
}

$String* ShellFolderColumnInfo::getTitle() {
	return this->title;
}

void ShellFolderColumnInfo::setTitle($String* title) {
	$set(this, title, title);
}

$Integer* ShellFolderColumnInfo::getWidth() {
	return this->width;
}

void ShellFolderColumnInfo::setWidth($Integer* width) {
	$set(this, width, width);
}

$Integer* ShellFolderColumnInfo::getAlignment() {
	return this->alignment;
}

void ShellFolderColumnInfo::setAlignment($Integer* alignment) {
	$set(this, alignment, alignment);
}

bool ShellFolderColumnInfo::isVisible() {
	return this->visible;
}

void ShellFolderColumnInfo::setVisible(bool visible) {
	this->visible = visible;
}

$SortOrder* ShellFolderColumnInfo::getSortOrder() {
	return this->sortOrder;
}

void ShellFolderColumnInfo::setSortOrder($SortOrder* sortOrder) {
	$set(this, sortOrder, sortOrder);
}

$Comparator* ShellFolderColumnInfo::getComparator() {
	return this->comparator;
}

void ShellFolderColumnInfo::setComparator($Comparator* comparator) {
	$set(this, comparator, comparator);
}

bool ShellFolderColumnInfo::isCompareByColumn() {
	return this->compareByColumn;
}

void ShellFolderColumnInfo::setCompareByColumn(bool compareByColumn) {
	this->compareByColumn = compareByColumn;
}

ShellFolderColumnInfo::ShellFolderColumnInfo() {
}

$Class* ShellFolderColumnInfo::load$($String* name, bool initialize) {
	$loadClass(ShellFolderColumnInfo, name, initialize, &_ShellFolderColumnInfo_ClassInfo_, allocate$ShellFolderColumnInfo);
	return class$;
}

$Class* ShellFolderColumnInfo::class$ = nullptr;

		} // shell
	} // awt
} // sun