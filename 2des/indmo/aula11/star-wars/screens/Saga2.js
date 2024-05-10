import React from "react";
import { Text, View, Image, StyleSheet } from "react-native";
import colors from "../constants/colors";

const Saga2 = () => {
    return (
        <View style={styles.container}>
            <Image 
                source={{uri: "./assets/anikin-i-have-the-high-ground.jpg"}}
                style={styles.image}
            />
            <View style={styles.textContainer}>
                <Text style={styles.paragraph}>
                    “Star Wars: Episódio II - Ataque dos Clones” é um filme que explora a complexidade política da galáxia, introduzindo o romance de Anakin Skywalker e Padmé Amidala. Dez anos após “A Ameaça Fantasma”, a tensão cresce com movimentos separatistas e a proposta de um exército da República.
                </Text>
                <Text style={styles.paragraph}>
                    Obi-Wan Kenobi investiga um atentado contra Padmé, enquanto Anakin a protege, levando a um inevitável e insuportável romance. O filme equilibra ação e narrativa política, expandindo o universo de Star Wars com uma trama que prepara o terreno para os eventos da trilogia original.
                </Text>
            </View>
        </View>
    );
}

const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: colors.blue,
        alignItems: 'center',
        justifyContent: 'center',
    },
    image: {
        width: 350,
        height: 200,
        borderRadius: 5,
    },
    textContainer: {
        backgroundColor: colors.yellow,

        marginHorizontal: 25,
        marginVertical: 25,

        paddingVertical: 15,
        paddingHorizontal: 25,

        borderRadius: 5,
    },
    paragraph: {
        fontSize: 15,
    }
});

export default Saga2; 
