#include <stdio.h>

int main ()
{

    int dia, mes;
    char sexo;

    printf("\t\t\t\t\t\tHOROSCOPO\n\n");
    printf("Cual es tu sexo? (M o F)  (Porfavor Ingresar la letra en mayuscula) \n");
    scanf("%c", &sexo);
    printf ("Ingresa el dia que naciste: 1-31\n");
    scanf ("%d", &dia);
    printf ("Ingresa el mes en que naciste: 1-12\n");
    scanf ("%d", &mes);


    if((dia >= 21 && mes == 3)||(dia <=20 && mes ==4 )) {
        printf("Tu signo es Aries.\n  No puedes seguir cometiendo los excesos que te han llevado hasta sufrir estas molestias estomacales. Invierte tu dinero en un nutricionista y deja que te ayude a dise�ar un plan alimenticio que te ayude a mejorar el funcionamiento de tu organismo, cambiandote ciertos malos habitos que tienes.");
        if(sexo == 'M')
            printf("Amor: No permitas que tus palabras se las lleve el viento, si no puedes cumplir tus promesas no las hagas en un principio, ya que esto te resta credibilidad y hace que las personas empiecen a perder la confianza en ti.\n");
        else if(sexo == 'F')
            printf(" Enfrentaras un inicio complicado a nivel economico, pero este mes te presenta un giro de energ�a para manifestar cambios en tu estilo de vida. ... Este mes tambi�n trae un giro de energ�a muy positivo que te impulsa y te llena de fuerza para manifestar cambios en tu estilo de vida y en tu lugar de trabajo");
        }

    if((dia >= 24 && mes == 9)||(dia <= 23 && mes == 10)) {
        printf("Tu signo es Libra.\n Cuida tu higiene bucal, ve al dentista y resuelve tus problemas dentales. No tengas miedo, porque es mucho peor si esperas y tienes que ir cuando verdaderamente te duele mucho la boca. \n");
        if(sexo == 'M')
            printf( "Sorprende hoy a tu pareja con un regalo inesperado. Ves a comprarle flores o alg�n objeto que necesite o desee, se original. Es una buena forma de hacerla/o sentir especial y reforzar vuestros lazos.  \n");
        else if(sexo == 'F')
            printf("Las personas que nacieron bajo el signo de Libra sobresaldr�n en todas las actividades que se propongan. Saturno y J�piter te apoyar�n enormemente ayud�ndote a conseguir el exito en los negocios y a levantar tu moral y tu potencial. ");
        }
    if((dia >= 21 && mes == 4)||(dia <= 21 && mes == 5)) {
        printf("Tu signo es Tauro.\n  Tus huesos comienzan a doler, quiz�s necesites ingerir alimentos ricos en calcio y vitamina D, esto ayudara a fortalecerlos y alejar esas molestias que te ata�en. Si ves que no remiten acude a tu m�dico para que te recomiende un tratamiento mas eficaz. \n");
        if(sexo == 'M')
            printf(" Debes valorar profundamente a tu pareja y demostrarle todo tu amor porque aunque a veces tengan altos y bajos a nivel sentimental, siempre ha sabido estar a tu lado. Invitala/o a cenar y demuestrale tu amor con una declarci�n hecha desde el interior de tu corazon. \n");
        else if(sexo == 'F')
            printf("Tu enorme ambici�n, te har� ser muy tenaz y entregado. Te van a llegar muy buenas oportunidades. Tu gran suerte, son tus contactos y relaciones. Te sabes mover entre gente influyente, que favorecer�n el desarrollo de tu vida profesional. ");
        }
    if((dia >= 24 && mes == 10)||(dia <= 22 && mes == 11)) {
        printf("Tu signo es Escorpio.\n Cuenta con t� m�dico y no tengas reparos en decirle lo que te esta pasando. Solo �l puede ayudarte y darte la soluci�n a estos problemas. Desconf�a de las medicinas naturales y alternativas que realmente no aportan nada..\n");
        if(sexo == 'M')
            printf(" Escucha a tu coraz�n y haz lo que te pide. El amor pide m�s de impulsos y sentimientos que racionalidad. No te lo pienses m�s debe ser atrevido. \n");
        else if(sexo == 'F')
            printf("las personas bajo el signo de Escorpio dejar�n los miedos a un lado y se permitir�n brillar. Una de las m�s grandes lecciones que tendr� este signo es que deber� aceptarse a s� mismo y mostrar su esencia. Este ser� el primera gran paso para la transformaci�n que sufrir� este a�o. ");
        }
    if((dia >= 22 && mes == 5)||(dia <= 21 && mes == 6)) {
        printf("Tu signo es Geminis.\n  La comida basura puede parecerte muy buena pero est� cargada de calor�as que te har�n aumentar r�pido de peso, cambia esta por alimentos m�s sanos. Piensa que si la llaman comida basura es por algo. \n");
        if(sexo == 'M')
            printf(" Confi�sale el amor a esa persona que tanto te atrae, puede que sea un sentimiento correspondido y que ella te brinde el amor que tanto has esperado experimentar. Se valiente y lanzate, solo as� lograr�s el exito en el amor. \n");
        else if(sexo == 'F')
            printf("tendr�n una determinaci�n incomparable y a lo largo de este a�o se le presentar�n grandes oportunidades laborales que le ayudar�n a alcanzar sus objetivos. Si definen bien sus metas y tienen en cuenta todos los factores que los rodean, alcanzar�n todo lo que se propongan.");
        }
    if((dia >= 23 && mes == 11)||(dia <= 21 && mes == 12)) {
        printf("Tu signo es Sagitario.\n Ve pensando en la posibilidad de una ocupaci�n extra que te de dinero adicional. Tendr�s la oportunidad de realizar una m�dica inversi�n en un negocio peque�o. Te est�n llegando ideas atrevidas respecto a tu trabajo, de que los apliques depender�n muchas cosas. En el amor, escucha a tu coraz�n y h�blale con �l a tu pareja, le quitar�s dudas y temores.\n");
        if(sexo == 'M')
            printf("Deja que tus sentimientos fluyan libremente, te encontrar�s sorpresas agradables. Trata de no seguir comparando a tu pareja con otras personas, le haces de menos.  \n");
        else if(sexo == 'F')
            printf("En el amor est�s tratando de tener m�s positividad y esa actitud te beneficiar� mucho. Puede que notes algo de cansancio, pero te ir�s recuperando poco a poco. ");
        }
    if((dia >= 21 && mes == 6)||(dia <= 23 && mes == 7)) {
        printf("Tu signo es Cancer.\n Tendr�s buenas noticias relacionadas con lo econ�mico, pero no bajes la guardia. Planifica tus tareas en el trabajo con antelaci�n y no te despistes, evitar�s problemas. Si tienes que hacer gastos importantes espera un poco, no es buen momento. Vas a tener m�s tiempo libre para dedic�rselo a tus amigos y a tu familia.\n");
        if(sexo == 'M')
            printf("Piensa en el amor,si cambias de ambiente podr�s conocer gente nueva que te resulte interesante. Trata de ser prudente con tu familia y ten paciencia, no compliques las cosas. \n");
        else if(sexo == 'F')
            printf("Tienes un poco abandonada a tu novio, sal un poco m�s y divi�rtete. T�mate tu descanso m�s en serio y pidele compania, es necesario para que te encuentres bien. Organ�zate, resuelve los asuntos uno a uno y te evitar�s muchos agobios.  ");
        }
    if((dia >= 22 && mes == 12)||(dia <= 20 && mes==1)) {
        printf("Tu signo es Capricornio.\n Organiza muy bien tu presupuesto para evitar problemas inesperados m�s adelante. Necesitas que alguien de confianza te asesore en finanzas, no te lances sin asesoramiento. Est�s con mucho agobio profesional, tendr�s que relegar algunas responsabilidades en el trabajo, pero no te inquietes por lo que no puedas resolver. Un d�a propicio para considerar cambios laborales, no te sientes bien donde est�s.\n");
        if(sexo == 'M')
            printf("En el amor, ir�s aclarando dudas y resolviendo problemas con tu pareja, os ir� bien. Si no tienes pareja podr�as conocer a alguien en un acontecimiento cultural. \n");
        else if(sexo == 'F')
            printf("Mant�n a raya las grasas y los picantes en tu alimentaci�n, asi estaras enn mejor forma y salud para impresionar a tu hombre. Tienes un periodo de tensiones, no te agobies y cu�date un poquito la salud, ver�s como todo vuelve a su cauce y seran mas felices. ");
        }
    if((dia >= 24 && mes==7)||(dia <= 23 && mes == 8)) {
        printf("Tu signo es Leo.\n Si haces un balance de los �ltimos meses, ver�s como las cosas no te van mal. Aprovecha bien el tiempo con tu trabajo y tendr�s muy buenos resultados. Durante estos d�as cuentas con la protecci�n de los astros para los temas laborales. Pasas por una serie de cambios positivos en lo profesional, s�cales partido.\n");
        if(sexo == 'M')
            printf("En el amor, est�s en un momento muy bueno para las relaciones sentimentales, aprovecha la racha. Tu familia y tus amigos estar�n muy pendientes de ti, no te faltar�n atenciones. \n");
        else if(sexo == 'F')
            printf("No hagas caso de los comentarios que escuches, s� firme y ve a tu aire. Cuida tu salud y recargar�s tus bater�as, no te sometas a sobreesfuerzos. ");
        }
    if((dia >= 21 && mes == 1)||(dia <= 19 && mes == 2)) {
        printf("Tu signo es Acuario.\n  El trabajo creativo para ti hoy te llevar� por distintos caminos que el usual. Decidiras probar con otro medio, o quedarte dentro de tu territorio pero cambiar la apariencia, el sonido o el gusto. Al principio podr� resultarte extra�o, pero seguramente te sorprender�s gratamente con los resultados, as� que no pierdas tiempo pensando si deber�as o no realizar el cambio. �Sigue tu corazon y disfruta de tu trabajo!\n\n");
        if(sexo == 'M')
            printf("Salud: Hoy sentir�s una r�faga de energ�a. Tendr�s la sensaci�n de estar caminando sobre carbones calientes. Ni pienses quedarte mirando la Tele todo el d�a. Porque de seguro los carbones te calcinaran. Ocupate de algo. Participa en actividades que te estimulen la mente y el cuerpo. Al final del d�a gozar�s los frutos de tu esfuerzo. \n");
        else if(sexo == 'F')
            printf(" tus emociones pasionales te llevar�n a tomar de decisiones importantes, en d�nde la calma, debe ser tu prioridad. Conf�a en tus corazonadas. ... A lo largo de agosto, tus emociones van a estar mucho m�s pasionales que de costumbre. ");
        }
    if((dia >= 24 && mes == 8)||(dia <= 23 && mes == 9)) {
        printf("Tu signo es Virgo.\n Ir�s resolviendo con facilidad los problemas que se planteen habitualmente. Har�s algunos gastos para mejorar tu hogar o tu calidad de vida, te compensar�. Podr�s tener algo de suerte y no te vendr�a nada mal algo de dinero extra. Deber�as decidir por ti este d�a, no hagas caso de lo que te digan. Tus amigos te apoyar�n en el trabajo este d�a, cuenta con ellos. El temor al rid�culo o a quedar mal no debe impedirte expresar tus sentimientos de amor.\n");
        if(sexo == 'M')
            printf("Tienes que organizar entre tus tareas y tu mujer, as� podr�s con todo y sin agobios. Te sientes con �nimo y estar�s de buen humor, pasar�s bien este d�a, est�s bien de salud. \n");
        else if(sexo == 'F')
            printf("Tienes el humor cambiante por culpa del cansancio, t�mate las cosas con calma.  ");
        }
    if((dia >= 20 && mes == 2)||(dia <= 20 && mes == 3)) {
        printf("Tu signo es Piscis.\n Recuerda que la influencia del entorno familiar, tanto tuyo como de tu pareja debe ser m�nima en la relaci�n para evitar complicaciones.\n");
        if(sexo == 'M')
            printf("Pon punto final a esa relaci�n que est� coartando tus libertades y tu capacidad de alcanzar la felicidad. No dudes m�s. \n");
        else if(sexo == 'F')
            printf("Jornada ca�tica a nivel laboral en casi todo aspecto. Esta ser� tu oportunidad de brillar como solo t� puedes hacerlo. ");
        }
    return 0;
}
