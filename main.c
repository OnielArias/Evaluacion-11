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
        printf("Tu signo es Aries.\n  No puedes seguir cometiendo los excesos que te han llevado hasta sufrir estas molestias estomacales. Invierte tu dinero en un nutricionista y deja que te ayude a diseñar un plan alimenticio que te ayude a mejorar el funcionamiento de tu organismo, cambiandote ciertos malos habitos que tienes.");
        if(sexo == 'M')
            printf("Amor: No permitas que tus palabras se las lleve el viento, si no puedes cumplir tus promesas no las hagas en un principio, ya que esto te resta credibilidad y hace que las personas empiecen a perder la confianza en ti.\n");
        else if(sexo == 'F')
            printf(" Enfrentaras un inicio complicado a nivel economico, pero este mes te presenta un giro de energía para manifestar cambios en tu estilo de vida. ... Este mes también trae un giro de energía muy positivo que te impulsa y te llena de fuerza para manifestar cambios en tu estilo de vida y en tu lugar de trabajo");
        }

    if((dia >= 24 && mes == 9)||(dia <= 23 && mes == 10)) {
        printf("Tu signo es Libra.\n Cuida tu higiene bucal, ve al dentista y resuelve tus problemas dentales. No tengas miedo, porque es mucho peor si esperas y tienes que ir cuando verdaderamente te duele mucho la boca. \n");
        if(sexo == 'M')
            printf( "Sorprende hoy a tu pareja con un regalo inesperado. Ves a comprarle flores o algún objeto que necesite o desee, se original. Es una buena forma de hacerla/o sentir especial y reforzar vuestros lazos.  \n");
        else if(sexo == 'F')
            printf("Las personas que nacieron bajo el signo de Libra sobresaldrán en todas las actividades que se propongan. Saturno y Júpiter te apoyarán enormemente ayudándote a conseguir el exito en los negocios y a levantar tu moral y tu potencial. ");
        }
    if((dia >= 21 && mes == 4)||(dia <= 21 && mes == 5)) {
        printf("Tu signo es Tauro.\n  Tus huesos comienzan a doler, quizás necesites ingerir alimentos ricos en calcio y vitamina D, esto ayudara a fortalecerlos y alejar esas molestias que te atañen. Si ves que no remiten acude a tu médico para que te recomiende un tratamiento mas eficaz. \n");
        if(sexo == 'M')
            printf(" Debes valorar profundamente a tu pareja y demostrarle todo tu amor porque aunque a veces tengan altos y bajos a nivel sentimental, siempre ha sabido estar a tu lado. Invitala/o a cenar y demuestrale tu amor con una declarción hecha desde el interior de tu corazon. \n");
        else if(sexo == 'F')
            printf("Tu enorme ambición, te hará ser muy tenaz y entregado. Te van a llegar muy buenas oportunidades. Tu gran suerte, son tus contactos y relaciones. Te sabes mover entre gente influyente, que favorecerán el desarrollo de tu vida profesional. ");
        }
    if((dia >= 24 && mes == 10)||(dia <= 22 && mes == 11)) {
        printf("Tu signo es Escorpio.\n Cuenta con tú médico y no tengas reparos en decirle lo que te esta pasando. Solo él puede ayudarte y darte la solución a estos problemas. Desconfía de las medicinas naturales y alternativas que realmente no aportan nada..\n");
        if(sexo == 'M')
            printf(" Escucha a tu corazón y haz lo que te pide. El amor pide más de impulsos y sentimientos que racionalidad. No te lo pienses más debe ser atrevido. \n");
        else if(sexo == 'F')
            printf("las personas bajo el signo de Escorpio dejarán los miedos a un lado y se permitirán brillar. Una de las más grandes lecciones que tendrá este signo es que deberá aceptarse a sí mismo y mostrar su esencia. Este será el primera gran paso para la transformación que sufrirá este año. ");
        }
    if((dia >= 22 && mes == 5)||(dia <= 21 && mes == 6)) {
        printf("Tu signo es Geminis.\n  La comida basura puede parecerte muy buena pero está cargada de calorías que te harán aumentar rápido de peso, cambia esta por alimentos más sanos. Piensa que si la llaman comida basura es por algo. \n");
        if(sexo == 'M')
            printf(" Confiésale el amor a esa persona que tanto te atrae, puede que sea un sentimiento correspondido y que ella te brinde el amor que tanto has esperado experimentar. Se valiente y lanzate, solo así lograrás el exito en el amor. \n");
        else if(sexo == 'F')
            printf("tendrán una determinación incomparable y a lo largo de este año se le presentarán grandes oportunidades laborales que le ayudarán a alcanzar sus objetivos. Si definen bien sus metas y tienen en cuenta todos los factores que los rodean, alcanzarán todo lo que se propongan.");
        }
    if((dia >= 23 && mes == 11)||(dia <= 21 && mes == 12)) {
        printf("Tu signo es Sagitario.\n Ve pensando en la posibilidad de una ocupación extra que te de dinero adicional. Tendrás la oportunidad de realizar una módica inversión en un negocio pequeño. Te están llegando ideas atrevidas respecto a tu trabajo, de que los apliques dependerán muchas cosas. En el amor, escucha a tu corazón y háblale con él a tu pareja, le quitarás dudas y temores.\n");
        if(sexo == 'M')
            printf("Deja que tus sentimientos fluyan libremente, te encontrarás sorpresas agradables. Trata de no seguir comparando a tu pareja con otras personas, le haces de menos.  \n");
        else if(sexo == 'F')
            printf("En el amor estás tratando de tener más positividad y esa actitud te beneficiará mucho. Puede que notes algo de cansancio, pero te irás recuperando poco a poco. ");
        }
    if((dia >= 21 && mes == 6)||(dia <= 23 && mes == 7)) {
        printf("Tu signo es Cancer.\n Tendrás buenas noticias relacionadas con lo económico, pero no bajes la guardia. Planifica tus tareas en el trabajo con antelación y no te despistes, evitarás problemas. Si tienes que hacer gastos importantes espera un poco, no es buen momento. Vas a tener más tiempo libre para dedicárselo a tus amigos y a tu familia.\n");
        if(sexo == 'M')
            printf("Piensa en el amor,si cambias de ambiente podrás conocer gente nueva que te resulte interesante. Trata de ser prudente con tu familia y ten paciencia, no compliques las cosas. \n");
        else if(sexo == 'F')
            printf("Tienes un poco abandonada a tu novio, sal un poco más y diviértete. Tómate tu descanso más en serio y pidele compania, es necesario para que te encuentres bien. Organízate, resuelve los asuntos uno a uno y te evitarás muchos agobios.  ");
        }
    if((dia >= 22 && mes == 12)||(dia <= 20 && mes==1)) {
        printf("Tu signo es Capricornio.\n Organiza muy bien tu presupuesto para evitar problemas inesperados más adelante. Necesitas que alguien de confianza te asesore en finanzas, no te lances sin asesoramiento. Estás con mucho agobio profesional, tendrás que relegar algunas responsabilidades en el trabajo, pero no te inquietes por lo que no puedas resolver. Un día propicio para considerar cambios laborales, no te sientes bien donde estás.\n");
        if(sexo == 'M')
            printf("En el amor, irás aclarando dudas y resolviendo problemas con tu pareja, os irá bien. Si no tienes pareja podrías conocer a alguien en un acontecimiento cultural. \n");
        else if(sexo == 'F')
            printf("Mantén a raya las grasas y los picantes en tu alimentación, asi estaras enn mejor forma y salud para impresionar a tu hombre. Tienes un periodo de tensiones, no te agobies y cuídate un poquito la salud, verás como todo vuelve a su cauce y seran mas felices. ");
        }
    if((dia >= 24 && mes==7)||(dia <= 23 && mes == 8)) {
        printf("Tu signo es Leo.\n Si haces un balance de los últimos meses, verás como las cosas no te van mal. Aprovecha bien el tiempo con tu trabajo y tendrás muy buenos resultados. Durante estos días cuentas con la protección de los astros para los temas laborales. Pasas por una serie de cambios positivos en lo profesional, sácales partido.\n");
        if(sexo == 'M')
            printf("En el amor, estás en un momento muy bueno para las relaciones sentimentales, aprovecha la racha. Tu familia y tus amigos estarán muy pendientes de ti, no te faltarán atenciones. \n");
        else if(sexo == 'F')
            printf("No hagas caso de los comentarios que escuches, sé firme y ve a tu aire. Cuida tu salud y recargarás tus baterías, no te sometas a sobreesfuerzos. ");
        }
    if((dia >= 21 && mes == 1)||(dia <= 19 && mes == 2)) {
        printf("Tu signo es Acuario.\n  El trabajo creativo para ti hoy te llevará por distintos caminos que el usual. Decidiras probar con otro medio, o quedarte dentro de tu territorio pero cambiar la apariencia, el sonido o el gusto. Al principio podrá resultarte extraño, pero seguramente te sorprenderás gratamente con los resultados, así que no pierdas tiempo pensando si deberías o no realizar el cambio. ¡Sigue tu corazon y disfruta de tu trabajo!\n\n");
        if(sexo == 'M')
            printf("Salud: Hoy sentirás una ráfaga de energía. Tendrás la sensación de estar caminando sobre carbones calientes. Ni pienses quedarte mirando la Tele todo el día. Porque de seguro los carbones te calcinaran. Ocupate de algo. Participa en actividades que te estimulen la mente y el cuerpo. Al final del día gozarás los frutos de tu esfuerzo. \n");
        else if(sexo == 'F')
            printf(" tus emociones pasionales te llevarán a tomar de decisiones importantes, en dónde la calma, debe ser tu prioridad. Confía en tus corazonadas. ... A lo largo de agosto, tus emociones van a estar mucho más pasionales que de costumbre. ");
        }
    if((dia >= 24 && mes == 8)||(dia <= 23 && mes == 9)) {
        printf("Tu signo es Virgo.\n Irás resolviendo con facilidad los problemas que se planteen habitualmente. Harás algunos gastos para mejorar tu hogar o tu calidad de vida, te compensará. Podrás tener algo de suerte y no te vendría nada mal algo de dinero extra. Deberías decidir por ti este día, no hagas caso de lo que te digan. Tus amigos te apoyarán en el trabajo este día, cuenta con ellos. El temor al ridículo o a quedar mal no debe impedirte expresar tus sentimientos de amor.\n");
        if(sexo == 'M')
            printf("Tienes que organizar entre tus tareas y tu mujer, así podrás con todo y sin agobios. Te sientes con ánimo y estarás de buen humor, pasarás bien este día, estás bien de salud. \n");
        else if(sexo == 'F')
            printf("Tienes el humor cambiante por culpa del cansancio, tómate las cosas con calma.  ");
        }
    if((dia >= 20 && mes == 2)||(dia <= 20 && mes == 3)) {
        printf("Tu signo es Piscis.\n Recuerda que la influencia del entorno familiar, tanto tuyo como de tu pareja debe ser mínima en la relación para evitar complicaciones.\n");
        if(sexo == 'M')
            printf("Pon punto final a esa relación que está coartando tus libertades y tu capacidad de alcanzar la felicidad. No dudes más. \n");
        else if(sexo == 'F')
            printf("Jornada caótica a nivel laboral en casi todo aspecto. Esta será tu oportunidad de brillar como solo tú puedes hacerlo. ");
        }
    return 0;
}
