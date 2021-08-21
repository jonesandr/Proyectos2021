
#include <stdio.h>
#include <stdlib.h>




int main ()
{
    int Day;
    int Month;
    char Sex;
    char Name[20];
    char again;
 
    
    printf(" \n\n **** Bienvenido al horoscopo de Anthony 2021 **** \n\n");
    
    
    do
    {
    
    printf(" \n Hola cual es su nombre? : ");
    scanf("%s",&*Name);
    
    printf(" \n Cual es su genero? M/F : ");
    scanf("%s",&Sex);
    
    int Total = 0;
    
    {
    printf (" \n Que dia usted nacio? : ");
    scanf ("%d", &Day);
        fflush(stdin);
 
    printf (" \n Que mes usted nacio? : ");
    scanf ("%d",&Month);
        fflush(stdin);
        
    printf(" \n\n | Hola %s |\n\n", &*Name);
        
        
    if (Sex == 'F' || Sex == 'f')
        printf(" \n\n | Su genero es Femenino |\n\n");
    else printf(" \n\n | Su genero es Masculino |\n\n");
        
        
        printf(" \n\n | Aqui le mostramos sus predicciones Astrologicas | \n\n");
        printf("\n\n");
        
        
    if((Day >= 21 && Month == 3)||(Day <= 20 && Month == 4)){ Total = Total + 1;
        printf (" Su signo es: Aries!\n");}
        
    else if ((Day >= 24 && Month == 9)||(Day <=23 && Month == 10)){ Total = Total + 2;
        printf (" Su signo es: Libra!\n");}
    
    else if((Day >= 21 && Month == 4)||(Day <= 21 && Month == 5)){ Total = Total + 3;
        printf (" Su signo es: Tauro!\n");}
    
    else if((Day >= 24 && Month == 10)||(Day <= 22 && Month == 11)){ Total = Total + 4;
        printf (" Su signo es: Escorpio!\n");}
    
    else if((Day >= 22 && Month == 5)||(Day <= 21 && Month == 6)){ Total = Total + 5;
        printf (" Su signo es: Geminis!\n");}
    
    else if((Day >= 23 && Month == 11)||(Day <= 21 && Month == 12)){ Total = Total + 6;
        printf (" Su signo es: Sagitario!\n");}
    
    else if((Day >= 21 && Month == 6)||(Day <= 23 && Month == 7)){ Total = Total + 7;
        printf (" Su signo es: Cancer!\n");}
   
    else if((Day >= 22 && Month == 12)||(Day <= 20 && Month == 1)){ Total = Total + 8;
        printf (" Su signo es: Capricornio!\n");}
    
    else if((Day >= 24 && Month == 7)||(Day <= 23 && Month == 8)){ Total = Total + 9;
        printf (" Su signo es: Leo!\n");}
    
    else if((Day >= 21 && Month == 1)||(Day <= 19 && Month == 2)){ Total = Total + 10;
        printf (" Su signo es: Acuario!\n");}
    
    else if((Day >= 24 && Month == 8)||(Day <=23 && Month == 9)){ Total = Total + 11;
        printf (" Su signo es: Virgo!\n");}
    
    else if((Day >= 20 && Month == 2)||(Day <= 20 && Month == 3)){ Total = Total + 12;
        printf (" Su signo es: Piscis!\n");}
    
    }
    {
    
    if (Total == 1)
    {
        printf(" \n\n *FUTURO: Te replantearás ciertas metas y objetivos debido a circunstancias ajenas a tu control. Esto te traerá frustración e ira.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: A las mujeres aries les encanta la aventura, con frecuencia el amor que buscan también toma esta forma.");
        else printf(" \n\n *AMOR: Verás como el vínculo con tu pareja se hace más fuerte con el pasar del tiempo. Te sentirás bendecido por la persona a tu lado.");
        printf(" \n\n *SALUD: Podrías sufrir dolores musculares continuos por el exceso de preocupaciones y compromisos. Los masajes te harán muy bien.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |7, 17 y 21|");
        printf(" \n\n *COLOR DE LA SUERTE: |Rojo|");
    }
    else if (Total == 2)
    {
        printf(" \n\n *FUTURO: Estás en condiciones para resolver situaciones personales y emocionales que alteran tu estado anímico. El cambio será la clave del día.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Las mujeres libras buscan relaciones duraderas. Son capaces de remover cielo y tierra con tal de dar con esa persona especial.");
        else printf(" \n\n *AMOR: Atribuyes mucha importancia a la vida afectiva, tomas al amor muy en serio. Consagras a quien eliges un amor intenso y duradero.");
        printf(" \n\n *SALUD: No es conveniente tomar ningún tipo de decisión importante, ni programar operaciones quirúrgicas para este período.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |2, 8 y 19|");
        printf(" \n\n *COLOR DE LA SUERTE: |Gris|");
    }
    else if (Total == 3)
    {
        printf(" \n\n *FUTURO: Muy favorable para cambiar tu forma de ver las cosas, estás en condiciones de realizar cimientos firmes para tu futuro.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Las tauro buscan el romanticismo en todas sus posibilidades. Las relaciones breves, salvo que sean muy intensas.");
        else printf(" \n\n *AMOR: La madurez en la relación con tu pareja te dejará muchos interrogantes. Etapa de reconocimiento y búsqueda a la vez.");
        printf(" \n\n *SALUD: Estarás pendiente de familiares con problemas de salud, pero, al mismo tiempo, deberás disfrutar un poco más de la vida y eliminar tensiones.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |4, 6 y 11|");
        printf(" \n\n *COLOR DE LA SUERTE: |Verde|");
    }
    else if (Total == 4)
    {
        printf(" \n\n *FUTURO: Recuperas la vida social y te apegas a las personas. Cuídate de no inmiscuirte demasiado en asuntos ajenos.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Las mujeres escorpianas tienen debilidad por los romances de película y las situaciones idílicas. Les encanta sentirse enamoradas.");
        else  printf(" \n\n *AMOR: Cuando declaras tu amor y deseo, esperas una rendición rápida, sin rodeos. Estarás impaciente por concretar un contacto físico.");
        printf(" \n\n *SALUD: El estado de ánimo será clave para afrontar los problemas de salud. Manteniendo una actitud positiva los malestares disminuirán.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |4, 13 y 21|");
        printf(" \n\n *COLOR DE LA SUERTE: |Negro|");
    }
    else if (Total == 5)
    {
        printf(" \n\n *FUTURO: La pasión llegará hoy con el estruendo de un trueno. Te ves superado por el derroche de atractivo que despliega esa persona que conociste.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Se caracteriza por lo versátil de su personalidad. Buscan una pareja que pueda acomodarse a esa situación y si les ocurre lo mismo, todavía mejor.");
        else printf(" \n\n *AMOR: Te cuestionarás si realmente tienes futuro junto a tu pareja actual. Abre plenamente tu corazón y busca dialogar con ella.");
        printf(" \n\n *SALUD: Atiende tus malestares crónicos, no le des largas al asunto.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |2, 4, 7 y 9|");
        printf(" \n\n *COLOR DE LA SUERTE: |Morado|");
    }
    else if (Total == 6)
    {
        printf(" \n\n *FUTURO: Hoy predominará tu buen humor y entusiasmo. Ideal para participar en actividades sociales como fiestas, reuniones o eventos.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Las mujeres de este signo aman viajar y descubrir el mundo. Si encuentran una persona que sea capaz de acompañarlas en la aventura.");
        else printf(" \n\n *AMOR: Tu prioridad debe ser el romance. Si crees que ya no hay romanticismo en tu relación, inventa nuevas ideas.");
        printf(" \n\n *SALUD: La actividad física desplegada favorece la salud, ya que facilita la eliminación de toxinas y contribuye a reforzar la resistencia del organismo.");
        printf(" \n\n *NUMEROS DE LA SUERTE: 3, 8, 13");
        printf(" \n\n *COLOR DE LA SUERTE: |Rosa|");
    }
    else if (Total == 7)
    {
        printf(" \n\n *FUTURO: No postergues visitas al médico por incipientes síntomas de malestar. No te pospongas más, ocúpate un poco de tu persona.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: A las mujeres nacidas bajo este astro, les cuesta encontrar la relación duradera  con la que sueñan.");
        else printf(" \n\n *AMOR: Te verás en la necesidad de cambiar ciertos defectos de tu personalidad para poder continuar con tu relación actual. No lo dudes.");
        printf(" \n\n *SALUD: Tendrás, molestias y dificultades físicas que te restaran tiempo. Deberás hacer deporte y comer más sano.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |5, 6, 8 y 19|");
        printf(" \n\n *COLOR DE LA SUERTE: |Marron|");
    }
    else if (Total == 8)
    {
        printf(" \n\n *FUTURO: Visita lugares culturales además de salir de la rutina, te puedes topar con gente que te abrirá otro panorama en tu vida.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Las mujeres capricornio son muy seguras de si mismas. Pero en el amor pueden estar meses para tomar la decisión que creen correcta. ");
        else printf(" \n\n *AMOR: Si presionas a quien duda, estarás eligiendo el camino directo a la ruptura. Si quieres conservar la relación deberás confiar.");
        printf(" \n\n *SALUD: Tendrás la tendencia a sufrir dolores reumáticos, problemas en los huesos, en este caso las rodillas que es la parte del cuerpo.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |3, 6, 16|");
        printf(" \n\n *COLOR DE LA SUERTE: |Azul|");
    }
    else if (Total == 9)
    {
        printf(" \n\n *FUTURO: Siempre gustaste de los deportes extremos y es hora de que te informes adecuadamente y decidas iniciarte en alguno.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Leo es un signo de relaciones largas y apasionadas.Pueden pasar largas temporadas sin pareja, pero cuando la encuentre no se separan de ella nunca más.");
        else  printf(" \n\n *AMOR: Te llevará un poco de trabajo pero finalmente lograrás salir de las tinieblas de una relación sin futuro.");
        printf(" \n\n *SALUD: No comas en exceso, cuídate del azúcar. Dolores en las extremidades superiores por exceso de ejercicios. No te extralimites.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |1, 9, 10|");
        printf(" \n\n *COLOR DE LA SUERTE: |Dorado|");
    }
    else if (Total == 10)
    {
        printf(" \n\n *FUTURO: Espléndida comunicación con los de casa y en el trabajo. Te sentirás más seguro, aunque debas enfrentar retrasos molestos.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Las mujeres acuario suelen tener parejas cortas. Con frecuencia, no encuentran que sus parejas se adecuen a su concepto personal del amor.");
        else  printf(" \n\n *AMOR: Tus relaciones amorosas pueden cambiar. Consignas y conquistas efímeras dejan el campo libre para compromisos perdurables.");
        printf(" \n\n *SALUD: Debes procurar mantener la tranquilidad ante cualquier situación difícil, estarás un poco inquieto y puede provocarte inquietud, nervosismo y dispersión.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |7, 14 y 20|");
        printf(" \n\n *COLOR DE LA SUERTE: |Purpura|");
    }
    else if (Total == 11)
    {
        printf(" \n\n *FUTURO: Hoy te verás capaz de todo, busca descargar energías practicando algún deporte o actividad física que te agrade.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Virgo tiene dos características muy definidas, su perfeccionismo y su independencia. Transmiten a sus parejas la necesidad de mantener el orden.");
        else  printf(" \n\n *AMOR: No te dejes manipular por caprichos inmaduros. Debes aprender a imponerte y decir que no cuando lo creas necesario.");
        printf(" \n\n *SALUD: Deberás tener cuidado con tu salud este año, malestares en vías urinarias. Visita al médico a tiempo.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |10, 15 y 27|");
        printf(" \n\n *COLOR DE LA SUERTE: |Blanco|");
    }
    else if (Total == 12)
    {
        printf(" \n\n *FUTURO: Tienes proyectado tu futuro, pero es mejor concentrarse en el presente para que nada te haga desviar del camino.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Son personas muy sentimentales, enamoradizas y también confiadas, algo que a menudo, les trae algún que otro problema con las parejas. ");
        else printf(" \n\n *AMOR: Si te sientes tentado a serle infiel a la persona que amas, piénsalo dos veces. No vale la pena tirar todo por la borda.");
        printf(" \n\n *SALUD: No tomes en exceso. Cuidado con el uso indiscriminado de medicamentos. Malestares por el exceso de trabajo producirá molestias y fatiga generales.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |5, 11 y 19|");
        printf(" \n\n *COLOR DE LA SUERTE: |Turquesa|");
    }
    }
        
    
        printf(" \n\n\n\n Desea intentarlo nuevamente? Y/N : ");
        scanf("%s",&again);
    }
    
    while (again == 'y' || again == 'Y');
    
    
    
    printf(" \n\n |Bye| \n\n");
        
    printf("\n\n\n\n\n\n\n\n\n");
    
    
    return 0;
}

