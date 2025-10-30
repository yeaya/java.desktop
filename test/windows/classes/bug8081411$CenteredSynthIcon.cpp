#include <bug8081411$CenteredSynthIcon.h>

#include <bug8081411.h>
#include <java/awt/Graphics.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthIcon.h>
#include <jcpp.h>

using $bug8081411 = ::bug8081411;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthIcon = ::javax::swing::plaf::synth::SynthIcon;

$FieldInfo _bug8081411$CenteredSynthIcon_FieldInfo_[] = {
	{"icon", "Ljavax/swing/plaf/synth/SynthIcon;", nullptr, $PRIVATE | $FINAL, $field(bug8081411$CenteredSynthIcon, icon)},
	{"width", "I", nullptr, $PRIVATE | $FINAL, $field(bug8081411$CenteredSynthIcon, width)},
	{"height", "I", nullptr, $PRIVATE | $FINAL, $field(bug8081411$CenteredSynthIcon, height)},
	{}
};

$MethodInfo _bug8081411$CenteredSynthIcon_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthIcon;II)V", nullptr, $PUBLIC, $method(static_cast<void(bug8081411$CenteredSynthIcon::*)($SynthIcon*,int32_t,int32_t)>(&bug8081411$CenteredSynthIcon::init$))},
	{"getIconHeight", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC},
	{"getIconWidth", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug8081411$CenteredSynthIcon_InnerClassesInfo_[] = {
	{"bug8081411$CenteredSynthIcon", "bug8081411", "CenteredSynthIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug8081411$CenteredSynthIcon_ClassInfo_ = {
	$ACC_SUPER,
	"bug8081411$CenteredSynthIcon",
	"java.lang.Object",
	"javax.swing.plaf.synth.SynthIcon",
	_bug8081411$CenteredSynthIcon_FieldInfo_,
	_bug8081411$CenteredSynthIcon_MethodInfo_,
	nullptr,
	nullptr,
	_bug8081411$CenteredSynthIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8081411"
};

$Object* allocate$bug8081411$CenteredSynthIcon($Class* clazz) {
	return $of($alloc(bug8081411$CenteredSynthIcon));
}

void bug8081411$CenteredSynthIcon::init$($SynthIcon* icon, int32_t width, int32_t height) {
	$set(this, icon, icon);
	this->width = width;
	this->height = height;
}

void bug8081411$CenteredSynthIcon::paintIcon($SynthContext* syntContext, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	int32_t dw = $nc(this->icon)->getIconWidth(syntContext);
	int32_t dh = $nc(this->icon)->getIconHeight(syntContext);
	int32_t dx = this->width - dw;
	int32_t dy = this->height - dh;
	$nc(this->icon)->paintIcon(syntContext, g, x + dx / 2, y + dy / 2, dw + 2, dh + 2);
}

int32_t bug8081411$CenteredSynthIcon::getIconWidth($SynthContext* sc) {
	return this->width;
}

int32_t bug8081411$CenteredSynthIcon::getIconHeight($SynthContext* sc) {
	return this->height;
}

bug8081411$CenteredSynthIcon::bug8081411$CenteredSynthIcon() {
}

$Class* bug8081411$CenteredSynthIcon::load$($String* name, bool initialize) {
	$loadClass(bug8081411$CenteredSynthIcon, name, initialize, &_bug8081411$CenteredSynthIcon_ClassInfo_, allocate$bug8081411$CenteredSynthIcon);
	return class$;
}

$Class* bug8081411$CenteredSynthIcon::class$ = nullptr;