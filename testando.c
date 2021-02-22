#include <allegro.h>

int main(){
	//função principal
	allegro_init();
	
	//instalar o relogio do jogo
	install_time();
	
	//instalar o teclado
	install_keyboard();
	
	//cores do jogo
	set_colordepth(32);
	
	//tipo de gráfico, esse 800x600 é a resolução
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0);
	
	//nome do jogo
	set_window_title("Kid Flash");
	
	//colocar so no jogo
	install_sound(DIGI_AUTODETECT, MINI_AUTODETECT, NULL);
	
	
	
	//variaveis
	int x=100, y=100, vel=5;
	
	/*
	criar um bitmap como se fosse uma foto grande
	colocar o tamanho da tela como entradas
	*/
	BITMAP* buffer = create_bitmap(800, 600);
	//importanto imagem
	BITMAP* imagem = load_bitmap("apple.jpg",NULL);
	BITMAP* imagem2 = load_bitmap("apple.jpg",NULL);
	BITMAP* face = load_bitmap("apple.jpg",NULL);
	
	//variaveis de sons
	//sample usado para os efeitos e midi para musica
	SAMPLE *wave= load_sample("nome do som na pasta");
	MIDI *midi=load_midi("nome do som na pasta");
	
	
	/*
	tocar o som( se colocar 1 ou TRUE ele repete o som e 
	0 ou FALSE ele nao repete o som)
	*/
	play_midi(midi,TRUE);
	
	/*
	fazer um circulo e gerar uma cor para ele(vermelho,verde,azul).
	na duvida de qual cor usar entre no paint e olhe as cores de 
	acordo com os valores de intensidade das cores primarias, 
	que variam de 0 à 255.
	*/
	circlefill (screen, 100, 100, 100, makecol(255, 245, 200));
	
	/*
	condição para manter o programa aberto, 
	enquanto não precionar a tecla ESC o progama continua abeto
	*/
	while(!key[KEY_ESC]){
	/*
	condição: se apertar uma tecla ele vai 
	se mover para frente um pixel
	*/
	//Andar para frente
		if(key[KEY_RIGHT]){
			x+=1;
			face=imagem2;
		}
		//andar para tras
		if(key[KEY_LEFT]){
			x-=1;
			face=imagem;
		}
		//andar para cima
		if(key[KEY_UP]){
			y-=1;
			play_sample(wave, 255, 128, 1000, 0);
			//play_sample(nome, volume, pan, velocidade, repetir)
		}
		//andar para baixo
		if(key[KEY_DOWN]){
			y+=1;
		}
		//vai criar varios circulos
		circlefill (buffer, x, y, 100, makecol(255, 245, 200));
		
		//passar o que tem no buffer para o screen
		draw_sprint(screen, buffer, 0, 0);
		draw_sprint(buffer, face, 100+x, 100+y);
		/*
		atrasa a velocidade para dar um 
		sentido de movimento na imagem
		*/
			rest(vel);
			
		//limpa a tela
		clear(buffer);
		
		
	}








	//destroindo bitmap
	destroy_bitmap(buffer);
	destroy_bitmap(imagem);
	destroy_bitmap(imagem2);
	destroy_bitmap(face);
	destroy_sample(wave);
	destroy_midi(midi);
	return 0;
}
//encerrando o main
END_OF_MAIN();