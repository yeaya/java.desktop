#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>

#include <apple/laf/JRSUIConstants$Size.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <java/awt/Insets.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <jcpp.h>

#undef REGULAR

using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaUtilControlSize$SizeVariant_FieldInfo_[] = {
	{"size", "Lapple/laf/JRSUIConstants$Size;", nullptr, 0, $field(AquaUtilControlSize$SizeVariant, size)},
	{"insets", "Ljava/awt/Insets;", nullptr, 0, $field(AquaUtilControlSize$SizeVariant, insets)},
	{"margins", "Ljava/awt/Insets;", nullptr, 0, $field(AquaUtilControlSize$SizeVariant, margins)},
	{"fontSize", "Ljava/lang/Float;", nullptr, 0, $field(AquaUtilControlSize$SizeVariant, fontSize)},
	{"w", "I", nullptr, 0, $field(AquaUtilControlSize$SizeVariant, w)},
	{"h", "I", nullptr, 0, $field(AquaUtilControlSize$SizeVariant, h)},
	{}
};

$MethodInfo _AquaUtilControlSize$SizeVariant_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaUtilControlSize$SizeVariant::*)()>(&AquaUtilControlSize$SizeVariant::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(AquaUtilControlSize$SizeVariant::*)(int32_t,int32_t)>(&AquaUtilControlSize$SizeVariant::init$))},
	{"<init>", "(Lcom/apple/laf/AquaUtilControlSize$SizeVariant;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaUtilControlSize$SizeVariant::*)(AquaUtilControlSize$SizeVariant*)>(&AquaUtilControlSize$SizeVariant::init$))},
	{"alterFontSize", "(F)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC},
	{"alterInsets", "(IIII)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC},
	{"alterMargins", "(IIII)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC},
	{"alterMinSize", "(II)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC},
	{"generateInsets", "(Ljava/awt/Insets;IIII)Ljava/awt/Insets;", nullptr, $STATIC, $method(static_cast<$Insets*(*)($Insets*,int32_t,int32_t,int32_t,int32_t)>(&AquaUtilControlSize$SizeVariant::generateInsets))},
	{"replaceInsets", "(Ljava/lang/String;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC},
	{"replaceInsets", "(Ljava/awt/Insets;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC},
	{"replaceMargins", "(Ljava/lang/String;)Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaUtilControlSize$SizeVariant_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtilControlSize$SizeVariant", "com.apple.laf.AquaUtilControlSize", "SizeVariant", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AquaUtilControlSize$SizeVariant_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaUtilControlSize$SizeVariant",
	"java.lang.Object",
	nullptr,
	_AquaUtilControlSize$SizeVariant_FieldInfo_,
	_AquaUtilControlSize$SizeVariant_MethodInfo_,
	nullptr,
	nullptr,
	_AquaUtilControlSize$SizeVariant_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtilControlSize"
};

$Object* allocate$AquaUtilControlSize$SizeVariant($Class* clazz) {
	return $of($alloc(AquaUtilControlSize$SizeVariant));
}

void AquaUtilControlSize$SizeVariant::init$() {
	$init($JRSUIConstants$Size);
	$set(this, size, $JRSUIConstants$Size::REGULAR);
	$set(this, insets, $new($InsetsUIResource, 0, 0, 0, 0));
	$set(this, margins, $new($InsetsUIResource, 0, 0, 0, 0));
	this->w = 0;
	this->h = 0;
}

void AquaUtilControlSize$SizeVariant::init$(int32_t minWidth, int32_t minHeight) {
	$init($JRSUIConstants$Size);
	$set(this, size, $JRSUIConstants$Size::REGULAR);
	$set(this, insets, $new($InsetsUIResource, 0, 0, 0, 0));
	$set(this, margins, $new($InsetsUIResource, 0, 0, 0, 0));
	this->w = 0;
	this->h = 0;
	this->w = minWidth;
	this->h = minHeight;
}

void AquaUtilControlSize$SizeVariant::init$(AquaUtilControlSize$SizeVariant* desc) {
	$init($JRSUIConstants$Size);
	$set(this, size, $JRSUIConstants$Size::REGULAR);
	$set(this, insets, $new($InsetsUIResource, 0, 0, 0, 0));
	$set(this, margins, $new($InsetsUIResource, 0, 0, 0, 0));
	this->w = 0;
	this->h = 0;
	$set(this, size, $nc(desc)->size);
	$set(this, insets, $new($InsetsUIResource, $nc(desc->insets)->top, $nc(desc->insets)->left, $nc(desc->insets)->bottom, $nc(desc->insets)->right));
	$set(this, margins, $new($InsetsUIResource, $nc(desc->margins)->top, $nc(desc->margins)->left, $nc(desc->margins)->bottom, $nc(desc->margins)->right));
	$set(this, fontSize, desc->fontSize);
	this->w = desc->w;
	this->h = desc->h;
}

AquaUtilControlSize$SizeVariant* AquaUtilControlSize$SizeVariant::replaceInsets($String* insetName) {
	$set(this, insets, $UIManager::getInsets(insetName));
	return this;
}

AquaUtilControlSize$SizeVariant* AquaUtilControlSize$SizeVariant::replaceInsets($Insets* i) {
	$set(this, insets, $new($InsetsUIResource, $nc(i)->top, i->left, i->bottom, i->right));
	return this;
}

AquaUtilControlSize$SizeVariant* AquaUtilControlSize$SizeVariant::alterInsets(int32_t top, int32_t left, int32_t bottom, int32_t right) {
	$set(this, insets, generateInsets(this->insets, top, left, bottom, right));
	return this;
}

AquaUtilControlSize$SizeVariant* AquaUtilControlSize$SizeVariant::replaceMargins($String* marginName) {
	$set(this, margins, $UIManager::getInsets(marginName));
	return this;
}

AquaUtilControlSize$SizeVariant* AquaUtilControlSize$SizeVariant::alterMargins(int32_t top, int32_t left, int32_t bottom, int32_t right) {
	$set(this, margins, generateInsets(this->margins, top, left, bottom, right));
	return this;
}

AquaUtilControlSize$SizeVariant* AquaUtilControlSize$SizeVariant::alterFontSize(float newSize) {
	float oldSize = this->fontSize == nullptr ? 0.0f : $nc(this->fontSize)->floatValue();
	$set(this, fontSize, $Float::valueOf(newSize + oldSize));
	return this;
}

AquaUtilControlSize$SizeVariant* AquaUtilControlSize$SizeVariant::alterMinSize(int32_t width, int32_t height) {
	this->w += width;
	this->h += height;
	return this;
}

$Insets* AquaUtilControlSize$SizeVariant::generateInsets($Insets* i, int32_t top, int32_t left, int32_t bottom, int32_t right) {
	if (i == nullptr) {
		return $new($InsetsUIResource, top, left, bottom, right);
	}
	$nc(i)->top += top;
	i->left += left;
	i->bottom += bottom;
	i->right += right;
	return i;
}

$String* AquaUtilControlSize$SizeVariant::toString() {
	return $str({"insets:"_s, this->insets, ", margins:"_s, this->margins, ", fontSize:"_s, this->fontSize});
}

AquaUtilControlSize$SizeVariant::AquaUtilControlSize$SizeVariant() {
}

$Class* AquaUtilControlSize$SizeVariant::load$($String* name, bool initialize) {
	$loadClass(AquaUtilControlSize$SizeVariant, name, initialize, &_AquaUtilControlSize$SizeVariant_ClassInfo_, allocate$AquaUtilControlSize$SizeVariant);
	return class$;
}

$Class* AquaUtilControlSize$SizeVariant::class$ = nullptr;

		} // laf
	} // apple
} // com