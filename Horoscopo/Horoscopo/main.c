
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
        printf(" \n\n *FUTURO: Te replantear??s ciertas metas y objetivos debido a circunstancias ajenas a tu control. Esto te traer?? frustraci??n e ira.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: A las mujeres aries les encanta la aventura, con frecuencia el amor que buscan tambi??n toma esta forma.");
        else printf(" \n\n *AMOR: Ver??s como el v??nculo con tu pareja se hace m??s fuerte con el pasar del tiempo. Te sentir??s bendecido por la persona a tu lado.");
        printf(" \n\n *SALUD: Podr??as sufrir dolores musculares continuos por el exceso de preocupaciones y compromisos. Los masajes te har??n muy bien.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |7, 17 y 21|");
        printf(" \n\n *COLOR DE LA SUERTE: |Rojo|");
    }
    else if (Total == 2)
    {
        printf(" \n\n *FUTURO: Est??s en condiciones para resolver situaciones personales y emocionales que alteran tu estado an??mico. El cambio ser?? la clave del d??a.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Las mujeres libras buscan relaciones duraderas. Son capaces de remover cielo y tierra con tal de dar con esa persona especial.");
        else printf(" \n\n *AMOR: Atribuyes mucha importancia a la vida afectiva, tomas al amor muy en serio. Consagras a quien eliges un amor intenso y duradero.");
        printf(" \n\n *SALUD: No es conveniente tomar ning??n tipo de decisi??n importante, ni programar operaciones quir??rgicas para este per??odo.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |2, 8 y 19|");
        printf(" \n\n *COLOR DE LA SUERTE: |Gris|");
    }
    else if (Total == 3)
    {
        printf(" \n\n *FUTURO: Muy favorable para cambiar tu forma de ver las cosas, est??s en condiciones de realizar cimientos firmes para tu futuro.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Las tauro buscan el romanticismo en todas sus posibilidades. Las relaciones breves, salvo que sean muy intensas.");
        else printf(" \n\n *AMOR: La madurez en la relaci??n con tu pareja te dejar?? muchos interrogantes. Etapa de reconocimiento y b??squeda a la vez.");
        printf(" \n\n *SALUD: Estar??s pendiente de familiares con problemas de salud, pero, al mismo tiempo, deber??s disfrutar un poco m??s de la vida y eliminar tensiones.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |4, 6 y 11|");
        printf(" \n\n *COLOR DE LA SUERTE: |Verde|");
    }
    else if (Total == 4)
    {
        printf(" \n\n *FUTURO: Recuperas la vida social y te apegas a las personas. Cu??date de no inmiscuirte demasiado en asuntos ajenos.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Las mujeres escorpianas tienen debilidad por los romances de pel??cula y las situaciones id??licas. Les encanta sentirse enamoradas.");
        else  printf(" \n\n *AMOR: Cuando declaras tu amor y deseo, esperas una rendici??n r??pida, sin rodeos. Estar??s impaciente por concretar un contacto f??sico.");
        printf(" \n\n *SALUD: El estado de ??nimo ser?? clave para afrontar los problemas de salud. Manteniendo una actitud positiva los malestares disminuir??n.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |4, 13 y 21|");
        printf(" \n\n *COLOR DE LA SUERTE: |Negro|");
    }
    else if (Total == 5)
    {
        printf(" \n\n *FUTURO: La pasi??n llegar?? hoy con el estruendo de un trueno. Te ves superado por el derroche de atractivo que despliega esa persona que conociste.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Se caracteriza por lo vers??til de su personalidad. Buscan una pareja que pueda acomodarse a esa situaci??n y si les ocurre lo mismo, todav??a mejor.");
        else printf(" \n\n *AMOR: Te cuestionar??s si realmente tienes futuro junto a tu pareja actual. Abre plenamente tu coraz??n y busca dialogar con ella.");
        printf(" \n\n *SALUD: Atiende tus malestares cr??nicos, no le des largas al asunto.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |2, 4, 7 y 9|");
        printf(" \n\n *COLOR DE LA SUERTE: |Morado|");
    }
    else if (Total == 6)
    {
        printf(" \n\n *FUTURO: Hoy predominar?? tu buen humor y entusiasmo. Ideal para participar en actividades sociales como fiestas, reuniones o eventos.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Las mujeres de este signo aman viajar y descubrir el mundo. Si encuentran una persona que sea capaz de acompa??arlas en la aventura.");
        else printf(" \n\n *AMOR: Tu prioridad debe ser el romance. Si crees que ya no hay romanticismo en tu relaci??n, inventa nuevas ideas.");
        printf(" \n\n *SALUD: La actividad f??sica desplegada favorece la salud, ya que facilita la eliminaci??n de toxinas y contribuye a reforzar la resistencia del organismo.");
        printf(" \n\n *NUMEROS DE LA SUERTE: 3, 8, 13");
        printf(" \n\n *COLOR DE LA SUERTE: |Rosa|");
    }
    else if (Total == 7)
    {
        printf(" \n\n *FUTURO: No postergues visitas al m??dico por incipientes s??ntomas de malestar. No te pospongas m??s, oc??pate un poco de tu persona.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: A las mujeres nacidas bajo este astro, les cuesta encontrar la relaci??n duradera  con la que sue??an.");
        else printf(" \n\n *AMOR: Te ver??s en la necesidad de cambiar ciertos defectos de tu personalidad para poder continuar con tu relaci??n actual. No lo dudes.");
        printf(" \n\n *SALUD: Tendr??s, molestias y dificultades f??sicas que te restaran tiempo. Deber??s hacer deporte y comer m??s sano.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |5, 6, 8 y 19|");
        printf(" \n\n *COLOR DE LA SUERTE: |Marron|");
    }
    else if (Total == 8)
    {
        printf(" \n\n *FUTURO: Visita lugares culturales adem??s de salir de la rutina, te puedes topar con gente que te abrir?? otro panorama en tu vida.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Las mujeres capricornio son muy seguras de si mismas. Pero en el amor pueden estar meses para tomar la decisi??n que creen correcta. ");
        else printf(" \n\n *AMOR: Si presionas a quien duda, estar??s eligiendo el camino directo a la ruptura. Si quieres conservar la relaci??n deber??s confiar.");
        printf(" \n\n *SALUD: Tendr??s la tendencia a sufrir dolores reum??ticos, problemas en los huesos, en este caso las rodillas que es la parte del cuerpo.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |3, 6, 16|");
        printf(" \n\n *COLOR DE LA SUERTE: |Azul|");
    }
    else if (Total == 9)
    {
        printf(" \n\n *FUTURO: Siempre gustaste de los deportes extremos y es hora de que te informes adecuadamente y decidas iniciarte en alguno.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Leo es un signo de relaciones largas y apasionadas.Pueden pasar largas temporadas sin pareja, pero cuando la encuentre no se separan de ella nunca m??s.");
        else  printf(" \n\n *AMOR: Te llevar?? un poco de trabajo pero finalmente lograr??s salir de las tinieblas de una relaci??n sin futuro.");
        printf(" \n\n *SALUD: No comas en exceso, cu??date del az??car. Dolores en las extremidades superiores por exceso de ejercicios. No te extralimites.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |1, 9, 10|");
        printf(" \n\n *COLOR DE LA SUERTE: |Dorado|");
    }
    else if (Total == 10)
    {
        printf(" \n\n *FUTURO: Espl??ndida comunicaci??n con los de casa y en el trabajo. Te sentir??s m??s seguro, aunque debas enfrentar retrasos molestos.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Las mujeres acuario suelen tener parejas cortas. Con frecuencia, no encuentran que sus parejas se adecuen a su concepto personal del amor.");
        else  printf(" \n\n *AMOR: Tus relaciones amorosas pueden cambiar. Consignas y conquistas ef??meras dejan el campo libre para compromisos perdurables.");
        printf(" \n\n *SALUD: Debes procurar mantener la tranquilidad ante cualquier situaci??n dif??cil, estar??s un poco inquieto y puede provocarte inquietud, nervosismo y dispersi??n.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |7, 14 y 20|");
        printf(" \n\n *COLOR DE LA SUERTE: |Purpura|");
    }
    else if (Total == 11)
    {
        printf(" \n\n *FUTURO: Hoy te ver??s capaz de todo, busca descargar energ??as practicando alg??n deporte o actividad f??sica que te agrade.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Virgo tiene dos caracter??sticas muy definidas, su perfeccionismo y su independencia. Transmiten a sus parejas la necesidad de mantener el orden.");
        else  printf(" \n\n *AMOR: No te dejes manipular por caprichos inmaduros. Debes aprender a imponerte y decir que no cuando lo creas necesario.");
        printf(" \n\n *SALUD: Deber??s tener cuidado con tu salud este a??o, malestares en v??as urinarias. Visita al m??dico a tiempo.");
        printf(" \n\n *NUMEROS DE LA SUERTE: |10, 15 y 27|");
        printf(" \n\n *COLOR DE LA SUERTE: |Blanco|");
    }
    else if (Total == 12)
    {
        printf(" \n\n *FUTURO: Tienes proyectado tu futuro, pero es mejor concentrarse en el presente para que nada te haga desviar del camino.");
        if (Sex == 'f' || Sex == 'F')
        printf(" \n\n *AMOR: Son personas muy sentimentales, enamoradizas y tambi??n confiadas, algo que a menudo, les trae alg??n que otro problema con las parejas. ");
        else printf(" \n\n *AMOR: Si te sientes tentado a serle infiel a la persona que amas, pi??nsalo dos veces. No vale la pena tirar todo por la borda.");
        printf(" \n\n *SALUD: No tomes en exceso. Cuidado con el uso indiscriminado de medicamentos. Malestares por el exceso de trabajo producir?? molestias y fatiga generales.");
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

